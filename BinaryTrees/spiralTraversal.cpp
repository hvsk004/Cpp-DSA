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
void spiralTraversal(Node *root)
{
    if (root == NULL)
        return;
    stack<Node *> s1, s2;
    s1.push(root);
    int reverse = 0;
    while (s1.empty() == false || s2.empty() == false)
    {
        if (!reverse)
        {
            int count = s1.size();
            for (int i = 0; i < count; i++)
            {
                Node *curr = s1.top();
                s1.pop();
                cout << curr->key << " ";
                if (curr->right != NULL)
                    s2.push(curr->right);
                if (curr->left != NULL)
                    s2.push(curr->left);
            }
        }
        else
        {
            int count = s2.size();
            for (int i = 0; i < count; i++)
            {
                Node *curr = s2.top();
                s2.pop();
                cout << curr->key << " ";
                if (curr->left != NULL)
                    s1.push(curr->left);
                if (curr->right != NULL)
                    s1.push(curr->right);
            }
        }
        cout << endl;
        reverse = !reverse;
    }
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
    spiralTraversal(tree);
    return 0;
}