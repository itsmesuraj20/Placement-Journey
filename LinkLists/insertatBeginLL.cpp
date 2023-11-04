#include<bits/stdc++.h>
using namespace std;

struct Node{
    Node *next;
    int data;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

Node *insertBegin(Node *head, int x)
{
    Node *temp = new Node(x);
    temp->next = head;
    return temp;
}

void printList(Node *head) {
    Node *current = head;
    while (current != NULL) {
        cout << current->data << " ";
        current = current->next;
    }
}

void freeList(Node *head) {
    while (head != NULL) {
        Node *temp = head;
        head = head->next;
        delete temp;
    }
}

int main()
{
    Node *head = NULL;
    head = insertBegin(head,30);
    head = insertBegin(head,20);
    head = insertBegin(head,10);

    printList(head);

    freeList(head);


    return 0;
}