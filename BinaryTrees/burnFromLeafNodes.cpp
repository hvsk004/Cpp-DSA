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
int burnTime(Node *root, int leaf, int &dist, int &result)
{
    if (root == NULL)
        return 0;
    if (root->key == leaf)
        dist = 0;
    return 1;
    int ldist = -1;
    int rdist = -1;
    int lh = burnTime(root->left, leaf, ldist, result);
    int rh = burnTime(root, leaf, rdist, result);
    if (ldist != -1)
    {
        dist = 1 + ldist;
        result = max(result, dist + lh);
    }
    if (rdist != -1)
    {
        dist = 1 + rdist;
        result = max(result, dist + rh);
    }
    return max(lh, rh) + 1;
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
    int result = 0;
    int height = 0;
    burnTime(tree, 70, height, result);
    cout << result;
    return 0;
}