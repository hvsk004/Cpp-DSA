#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int root;
    Node *left;
    Node *right;
    Node(int x) : root(x), left(NULL), right(nullptr) {}
};
void levelOrderTraversla(Node *root) // Also Know as Breadth First Traversal
{
    /*An efficient solution can be to find the height and use nodes at a
     distance till the max heigh*/

    // The Time Complexity is O(N)
    // Auxilary Space O(N) genrrally the space is equal to width of the binary tree.

    // Queue Data Structure is used.
    // First push the elements of the current level into the queue and while removin them push the children and repeat
    if (root == NULL)
    {
        return;
    }
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *curr = q.front();
        q.pop();
        cout << curr->root << " ";
        if (curr->left != NULL)
        {
            q.push(curr->left);
        }
        if (curr->right != NULL)
        {
            q.push(curr->right);
        }
    }
}
void linebyLine(Node *root)
{
    // We can do this by pushing a Null Marker into the queue after every level
    // This works on the principle that when a level is printed completely
    // all the children are already in the queue so we push a Null marker as a level change
    // Complexity O(N) and O(N) time and space
    if (root == NULL)
    {
        return;
    }
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    while (q.size() > 1)
    {
        Node *curr = q.front();
        q.pop();
        if (curr == NULL)
        {
            q.push(NULL);
            cout << endl;
        }
        else
        {
            cout << curr->root << " ";
            if (curr->left != NULL)
            {
                q.push(curr->left);
            }
            if (curr->right != NULL)
            {
                q.push(curr->right);
            }
        }
    }
}
void levelByLevel(Node *root)
{
    // Instead of using  a NUll pointer we use loops
    vector<int> v; // For Size
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        int count = q.size(); // We use count because the size of queue changes inside the loop and hence cannot be used directlty.
        for (int i = 0; i < count; i++)
        {
            Node *curr = q.front();
            q.pop();
            v.push_back(curr->root);
            cout << curr->root << " ";
            if (curr->left != NULL)
            {
                q.push(curr->left);
            }
            if (curr->right != NULL)
            {
                q.push(curr->right);
            }
        }
        cout << endl;
    }
    cout << "Size : " << v.size();
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
    levelOrderTraversla(tree); // Output :: 10 15 20 30 40 50 60 70
    cout << endl
         << "Line By Line == Level by Level" << endl;
    linebyLine(tree);
    cout << endl
         << "iterative approach: \n";
    levelByLevel(tree);
    return 0;
}