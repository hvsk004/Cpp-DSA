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
Node *insert(Node *root, int x)
{
    Node *temp = new Node(x);
    if (root == NULL)
        return temp;
    else if (root->key > x)
        root->left = insert(root->left, x);
    else
        root->right = insert(root->right, x);
    return root;
}
Node *insert(Node *root, int x)
{
    Node *temp = new Node(x);
    Node *parent = NULL;
    Node *curr = root;
    while (curr != NULL)
    {
        parent = curr;
        if (curr->key > x)
            curr = curr->left;
        else if (curr->key < x)
            curr = curr->right;
        else
            return root;
    }
    if (parent == NULL)
    {
        return temp;
    }
    if (parent->key > x)
        parent->left = temp;
    else
        parent->right = temp;
    return root;
}
int main()
{

    return 0;
}