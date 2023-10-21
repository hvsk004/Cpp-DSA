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
int height(Node *root)
{
    if (root == NULL)
        return 0;
    return max(height(root->left), height(root->right) + 1);
}
bool isBalanced(Node *root) // Time Complexity is O(N^2)
{
    if (root == NULL)
        return true;
    int lh = height(root->left);
    int rh = height(root->right);
    return ((abs(lh - rh) <= 1) && isBalanced(root->left) && isBalanced(root->right));
}
int checkBalanced(Node *root) // Time Complexity is O(N)
{
    if (root == NULL)
        return 0;
    int rh = checkBalanced(root->right);
    if (rh == -1)
        return -1;
    int lh = checkBalanced(root->left);
    if (lh == -1)
        return -1;
    if (abs(lh - rh) > 1)
        return -1;
    return (max(rh, lh) + 1); 
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

    Node *tree2 = new Node(20);
    tree2->left = new Node(8);
    tree2->right = new Node(12);
    tree2->right->left = new Node(9);
    tree2->right->right = new Node(3);
    // cout << isBalanced(tree2);
    // cout << endl
    //      << checkBalanced(tree);
    Node *tree3 = new Node(10);
    tree3->left = new Node(20);
    tree3->right = new Node(30);
    tree3->right->left = new Node(40);
    tree3->right->left->right = new Node(50);
    cout << isBalanced(tree3);
    cout << endl
         << checkBalanced(tree3);
    return 0;
}