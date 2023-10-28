#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int key;
    Node *left;
    Node *right;
    Node(int value) : key(value), left(NULL), right(NULL) {}
};
bool findPath(Node *root, vector<Node *> &path, int n)
{
    if (root == NULL)
        return false;
    path.push_back(root);
    if (root->key == n)
        return true;
    if (findPath(root->left, path, n) || findPath(root->right, path, n))
        return true;
    path.pop_back();
    return false;
}
Node *lca(Node *root, int n1, int n2)
{
    vector<Node *> path1, path2;

    if (findPath(root, path1, n1) == false || findPath(root, path2, n2) == false)
        return NULL;
    for (int i = 0; i < abs(path1.size()) && abs(path2.size()); i++)
    {
        if (path1[i + 1] != path2[i + 1])
            return path1[i];
    }
    return NULL;
}
Node *lowestCommonAncestor(Node *root, int n1, int n2)
{
    if (root == NULL)
        return NULL;
    if (root->key == n1 || root->key == n2)
        return root;
    Node *lcaLeft = lowestCommonAncestor(root->left, n1, n2);
    Node *lcaRight = lowestCommonAncestor(root->right, n1, n2);
    if (lcaLeft != NULL && lcaRight != NULL)
        return root;
    if (lcaLeft != NULL)
        return lcaLeft;
    else
        return lcaRight;
}
int main()
{
    Node *tree = new Node(10);
    tree->left = new Node(15);
    tree->right = new Node(20);
    tree->left->left = new Node(30);
    tree->right->left = new Node(40);
    tree->right->right = new Node(50);
    tree->right->left->left = new Node(60);
    tree->right->left->right = new Node(70);
    // Node *lca1 = lowestCommonAncestor(tree, 60, 70);
    Node *lca2 = lca(tree, 60, 70);
    cout << lca2->key;
    return 0;
}