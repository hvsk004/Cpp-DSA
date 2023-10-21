#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int key;
    Node *right;
    Node *left;
    Node(int value) : key(value), left(NULL), right(NULL) {}
};
Node *bTreeTODLL(Node *root, Node *prev = NULL)
{
    if (root == NULL)
        return root;
    Node *head = bTreeTODLL(root->left);
    if (prev == NULL)
        head = root;
    else
    {
        root->right = prev;
        prev->right = root;
    }
    prev = root;
    bTreeTODLL(root->right);
    return head;
}
int main()
{

    return 0;
}