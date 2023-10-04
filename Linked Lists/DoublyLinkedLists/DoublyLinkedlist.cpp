#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next, *previous;
    Node(int value) : data(value), next(nullptr), previous(nullptr) {}
};
class DoublyLinkedList
{
private:
    Node *head;

public:
    DoublyLinkedList() : head(nullptr) {}
    void insert(int value)
    {
        Node *newNode = new Node(value);
        if (!head)
        {
            head = newNode;
        }
        else
        {
            Node *temp = head;
            while (temp->next != nullptr)
            {
                temp = temp->next;
            }
            temp->next = newNode;
            newNode->previous = temp;
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
    DoublyLinkedList dll;
    dll.insert(4);
    dll.insert(6);
    dll.display();
    return 0;
}