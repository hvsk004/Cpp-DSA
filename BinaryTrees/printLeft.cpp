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
void printLeft(Node *root) // Iterative Approach
{
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        int count = q.size();
        for (int i = 0; i < count; i++)
        {
            Node *curr = q.front();
            q.pop();
            if (i == 0)
            {
                cout << curr->key;
            }
            if (curr->left != NULL)
                q.push(curr->left);
            if (curr->right != NULL)
                q.push(curr->right);
        }
        cout << endl;
    }
}
void printLeft2(Node *root, int level, int &maxLevel) // Recursive Approach
{
    if (root == NULL)
        return;
    if (maxLevel < level)
    {
        cout << root->key << " ";
        maxLevel = level;
    }
    printLeft2(root->left, level + 1, maxLevel);
    printLeft2(root->right, level + 1, maxLevel);
}
int main()
{
    int maxLevel = 0;

    Node *tree = new Node(10);
    tree->left = new Node(15);
    tree->right = new Node(20);
    tree->left->left = new Node(30);
    tree->right->left = new Node(40);
    tree->right->right = new Node(50);
    tree->right->left->left = new Node(60);
    tree->right->left->right = new Node(70);
    cout << "Left side view is: \n";
    printLeft(tree);

    cout << "Recursisve Approach: ";
    printLeft2(tree, 1, maxLevel);
    return 0;
}