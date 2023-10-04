#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int value) : data(value), next(nullptr) {}
};
class LinkedList
{
private:
    Node *head;

public:
    LinkedList() : head(nullptr) {}
    void append(int value)
    {
        Node *newNode = new Node(value);
        if (!head)
        {
            head = newNode;
        }
        Node *temp = head;
        while (temp != nullptr)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    void display()
    {
        Node *temp = head;
        while (temp != nullptr)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
};
int main()
{
    LinkedList linkedList;
    linkedList.append(4);
    for (int i = 1; i <= 6; i++)
    {
        linkedList.append(i);
    }
    linkedList.display();
    return 0;
}