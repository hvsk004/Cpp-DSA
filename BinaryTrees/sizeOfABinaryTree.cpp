#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int root;
    Node *left;
    Node *right;
    Node(int value) : root(value), left(NULL), right(NULL) {}
};
int sizeOfBinaryTree(Node *root) // O(N) O(h) time and space complexity
{
    if (root == NULL)
        return 0;
    return 1 + sizeOfBinaryTree(root->left) + sizeOfBinaryTree(root->right);
}
int sizeOfBinaryTree2(Node *root)
{
    queue<Node *> q;
    vector<int> v;
    q.push(root);
    while (!q.empty())
    {
        Node *curr = q.front();
        q.pop();
        v.emplace_back(curr->root);
        if (curr->left != NULL)
            q.push(curr->left);
        if (curr->right != NULL)
            q.push(curr->right);
    }
    return v.size();
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
    cout << "Size of the Tree : " << sizeOfBinaryTree2(tree);
    return 0;
}