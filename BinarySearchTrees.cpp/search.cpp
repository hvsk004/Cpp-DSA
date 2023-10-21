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
bool search(Node *root, int target)
{
    if (root == NULL)
        return false;
    if (root->key == target)
        return true;
    if (root->key > target)
        return search(root->left, target);
    else
        return search(root->right, target);
}
bool search(Node *root, int target)
{
    Node *curr = root;
    while (curr != NULL)
    {
        if (curr->key == target)
            return true;
        if (curr->key > target)
            curr = curr->left;
        else
            curr = curr->right;
    }
    return false;
}
int main()
{

    return 0;
}