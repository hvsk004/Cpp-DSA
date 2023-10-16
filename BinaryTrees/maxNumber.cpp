// To find the Node with the highest value in a binary tree
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
int maxElement(Node *root) // Recursive approach best when height is less and width is more.
{
    if (root == NULL)
        return INT_MIN;
    return max(root->key, max(maxElement(root->right), maxElement(root->left)));
}
int maxElement2(Node *root) // Iterative approach best for trees with large height since there will be no recursion overhead
{
    int maxValue = 0;
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *curr = q.front();
        q.pop();
        maxValue = max(maxValue, curr->key);
        if (curr->left != NULL)
            q.push(curr->left);
        if (curr->right != NULL)
            q.push(curr->right);
    }
    return maxValue;
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
    tree->right->left->right = new Node(10);
    cout << "The Max Element is: " << maxElement2(tree);
    return 0;
}