#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node (int x)
    {
        data = x;
        next = NULL;

    }
};

Node *insertEnd(Node *head,int x)
{
    Node *temp = new Node(x);
    if (head == NULL) 
    {
        return temp;
    }
        Node *current = head;
        while(current -> next != NULL)
        {
            current = current -> next;
        }

        current -> next = temp;
        return head;
    }
    

void printList(Node *head)
{
    Node *current = head;
    while (current != NULL)
    {
        cout<< current -> data << " ";
        current = current -> next;
    }
    cout<<endl;
}

void freeList(Node *head)
{
    while(head != NULL)
    {
        Node *temp = head;
        head =head ->next;
        delete temp;
    }
}

int main()
{
    Node *head = NULL;
    head = insertEnd(head,10);
    head = insertEnd(head,20);
    head = insertEnd(head,30);
    head = insertEnd(head,40);

    printList(head);

    freeList(head);

    return 0;

}