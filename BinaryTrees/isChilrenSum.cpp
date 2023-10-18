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
bool isCSum(Node *root) // Time Complecity : O(N) and space complexity O(h)
{
    if (root == NULL)
        return true;
    if (root->left == NULL && root->right == NULL)
        return true;
    int sum = 0;
    if (root->left != NULL)
        sum += root->left->key;
    if (root->right != NULL)
        sum += root->right->key;
    return (root->key == sum && isCSum(root->left) && isCSum(root->right));
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
    cout << "is C sum: " << isCSum(tree2);
    return 0;
}