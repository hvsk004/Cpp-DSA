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
int countNodes(Node *root)
{
    int lh = 0;
    int rh = 0;
    Node *curr = root;
    while (curr != NULL)
    {
        lh++;
        curr = curr->left;
    }
    curr = root;
    while (curr != NULL)
    {
        rh++;
        curr = curr->right;
    }
    if (lh == rh)
        return pow(2, rh) - 1;
    return 1 + countNodes(root->left) + countNodes(root->right);
}
int main()
{
    // cout << countNodes(tree);
    return 0;
}