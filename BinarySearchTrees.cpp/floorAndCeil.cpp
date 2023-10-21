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
Node *floor(Node *root, int x)
{
    Node *res = NULL;
    while (root != NULL)
    {
        if (root->key == x)
        {
            res = root;
        }
        else if (root->key > x)
        {
            root = root->left;
        }
        else
        {
            res = root;
            root = root->right;
        }
    }
    return res;
}
Node *ceil(Node *root, int x)
{
    Node *res = NULL;
    while (root != NULL)
    {
        if (root->key == x)
        {
            res = root;
        }
        else if (root->key > x)
        {
            res = root;
            root = root->left;
        }
        else
        {
            root = root->right;
        }
    }
    return res;
}
int main()
{

    return 0;
}