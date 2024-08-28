// Linked List

#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

void printList(Node *n)
{
    while (n != nullptr)
    {
        cout << n->data << " ";
        n = n->next;
    }
}

int main()
{
    Node *head = nullptr;
    Node *second = nullptr;
    Node *third = nullptr;

    head = new Node();
    second = new Node();
    third = new Node();

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = nullptr;

    printList(head);

    return 0;
}