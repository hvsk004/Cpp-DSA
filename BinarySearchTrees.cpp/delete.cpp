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
Node *findSuccessor(Node *root)
{
    while (root != NULL && (root->left != NULL))
    {
        root = root->left;
    }
    return root;
}
Node *deleteNode(Node *root, int target)
{
    if (root == NULL)
        return root;
    if (root->key > target)
        root->left = deleteNode(root, target);
    else if (root->key < target)
        root->right = deleteNode(root, target);
    else
    {
        if (root->left == NULL)
        {
            Node *temp = root->right;
            delete root;
            return temp;
        }
        else if (root->right == NULL)
        {
            Node *temp = root->left;
            delete root;
            return temp;
        }
        else
        {
            Node *succ = findSuccessor(root);
            root->key = succ->key;
            root->right = deleteNode(root->right, succ->key);
        }
        return root;
    }
}
int main()
{

    return 0;
}