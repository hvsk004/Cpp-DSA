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
    Node *tail;

public:
    LinkedList() : head(nullptr), tail(head) {}

    void insertAtTail(int value)
    {
        Node *newNode = new Node(value);
        if (!head)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void insertAtHead(int value)
    {
        Node *newNode = new Node(value);
        newNode->next = head;
        head = newNode;

        if (!tail)
        {
            tail = head;
        }
    }

    void display()
    {
        Node *current = head;
        while (current != nullptr)
        {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }
    void LinearSearch(int target)
    {
        if (!head || !tail)
        {
            cout << "Empty Linked List";
            return;
        }
        Node *curr = head;
        while (curr != nullptr)
        {
            if (curr->data == target)
            {
                cout << target << " is present in the Linked List";
                return;
            }
            curr = curr->next;
        }
        cout << target << " is not present in the Linked List";
        return;
    }
};

int main()
{
    LinkedList List1;
    List1.insertAtHead(4);
    List1.insertAtHead(6);
    List1.insertAtTail(8);
    List1.insertAtTail(10);
    List1.display();
    List1.LinearSearch(12);
    return 0;
}
