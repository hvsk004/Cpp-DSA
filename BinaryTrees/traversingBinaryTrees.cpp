#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int key;
    Node *left;
    Node *right;
    Node(int x) : key(x), left(NULL), right(NULL) {}
};
void preorderTraversal(Node *root)
{
    if (root != NULL)
    {
        cout << root->key << " ";
        preorderTraversal(root->left);
        preorderTraversal(root->right);
    }
}
void postorderTraversal(Node *root)
{
    if (root != NULL)
    {
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        cout << root->key << " ";
    }
}
void inorderTraversal(Node *root)
{
    if (root != NULL)
    {
        inorderTraversal(root->left);
        cout << root->key << " ";
        inorderTraversal(root->right);
    }
}
int main()
{
    Node *root = new Node(10);
    root->left = new Node(11);
    root->left->left = new Node(7);
    root->right = new Node(9);
    root->right->left = new Node(15);
    root->right->right = new Node(8);
    cout << "Inorder: ";
    inorderTraversal(root);
    cout << endl;
    cout << "Postorder: ";
    postorderTraversal(root);
    cout << endl;
    cout << "Preorder: ";
    preorderTraversal(root);
    return 0;
}