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
void serialize(Node *root, vector<int> &v)
{
    if (root == NULL)
    {
        v.push_back(-1);
        return;
    }
    v.push_back(root->key);
    serialize(root->left, v);
    serialize(root->right, v);
    return;
}
Node *deserialize(vector<int> v, int index = 0)
{
    if (index == v.size())
        return NULL;
    int value = v[index];
    index++;
    if (value == -1)
        return NULL;
    Node *root = new Node(value);
    root->left = deserialize(v, index);
    root->right = deserialize(v, index);
    return root;
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
    vector<int> ans;
    serialize(tree, ans);
    for (int i : ans)
        cout << i << " ";
    return 0;
}