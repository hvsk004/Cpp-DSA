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
void NodesAtDistance(Node *root, int k) // root node is considered as 0
{
    if (root == NULL)
    {
        return;
    }
    if (root != NULL)
    {
        if (k == 0)
        {
            cout << root->key << " ";
        }
        else
        {
            NodesAtDistance(root->right, k - 1);
            NodesAtDistance(root->left, k - 1);
        }
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
    NodesAtDistance(root, 2);
    return 0;
}