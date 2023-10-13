#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int key;
    node *left;
    node *right;
    node(int x) : key(x), left(NULL), right(NULL) {}
};
int main()
{
    node *root = new node(12);
    root->left = new node(10);
    root->right = new node(32);
    return 0;
}