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
int height(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    else
    {
        return max(height(root->left), height(root->right)) + 1;
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
    cout << "Height : " << height(root);
    return 0;
}
