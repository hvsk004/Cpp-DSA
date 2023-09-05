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
    void insertAtHead(int value)
    {

        Node *newNode = new Node(value);
        if (!head)
        {
            head = newNode;
        }
        newNode->next = head;
        head = newNode;
    }
    void insertAtTail(int value)
    {
        Node *newNode = new Node(value);
        if (!head)
        {
            head = newNode;
        }
        else
        {
            Node *curr = head;
            while (curr->next != nullptr)
            {
                curr = curr->next;
            }
            curr->next = newNode;
        }
    }
    void display()
    {
        Node *curr = head;
        while (curr != nullptr)
        {
            cout << curr->data << " ";
            curr = curr->next;
        }
    }
};
int main()
{
    LinkedList linkedlist;
    linkedlist.insertAtTail(4);
    linkedlist.insertAtTail(6);
    linkedlist.insertAtHead(6);
    linkedlist.display();
    return 0;
}