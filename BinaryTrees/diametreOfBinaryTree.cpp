#include <bits/stdc++.h>
using namespace std;
// int diametre = 0;
class Node
{
public:
    int key;
    Node *left;
    Node *right;
    Node(int value) : key(value), left(NULL), right(NULL) {}
};
int diametreOfTree(Node *root, int &diametre)
{
    if (root == NULL)
        return 0;
    int lh = diametreOfTree(root->left, diametre);
    int rh = diametreOfTree(root->right, diametre);
    diametre = max(diametre, 1 + lh + rh);
    return max(lh, rh) + 1;
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
    int diametre = 0;
    diametreOfTree(tree, diametre);
    cout << diametre;
    return 0;
}