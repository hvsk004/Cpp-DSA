// To find the Node with the highest value in a binary tree
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
int maxElement(Node *root)
{
    if (root == NULL)
        return 0;
    return max(root->key, max(maxElement(root->right), maxElement(root->left)));
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
    cout << "The Max Element is: " << maxElement(tree);
    return 0;
}