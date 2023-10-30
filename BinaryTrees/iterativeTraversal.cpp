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
void inorderTraversal(Node *root, vector<int> v)
{
    if (root == NULL)
        return;
    Node *curr = root;
    stack<Node *> s;
    while (curr != NULL || s.empty() == false)
    {
        while (curr != NULL)
        {
            s.push(curr);
            curr = curr->left;
        }
        curr = s.top();
        s.pop();
        v.push_back(curr->key);
        curr = curr->right;
    }
}
void preoderTraversal(Node *root, vector<int> v)
{
    if (root == NULL)
        return;
    stack<Node *> s;
    s.push(root);
    while (!s.empty())
    {
        Node *curr = s.top();
        v.push_back(curr->key);
        s.pop();
        if (curr->right != NULL)
            s.push(curr->right);
        if (curr->left != NULL)
            s.push(curr->left);
    }
}
void postoderTraversal(Node *root, vector<int> v)
{
    if (root == NULL)
        return;
    stack<Node *> s;
    Node *curr = root;
    while (s.empty() == false || curr != NULL)
    {
        while (curr != NULL)
        {
            s.push(curr);
            curr = curr->left;
        }
        curr = s.top();
        s.pop();
        v.push_back(curr->key);
        curr = s.top();
        curr = curr->right;
    }
}
int main()
{

    return 0;
}