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

void printList(Node* head)//Normal Way
{
    Node* current = head;
    while(current != NULL)
    {
        cout<<current -> data << " ";
        current = current -> next;
    }
}

void printRecursively(Node* head)// Recursive Way
{
    if(head==NULL)
    {
        return ;head
    }

    cout<<head -> data << " ";
    printRecursively(head -> next);
}

int main()
{
    Node* head = new Node(10);
    head -> next = new Node(20);
    head -> next -> next = new Node(30);
    head -> next -> next -> next = new Node(400 );

    cout<<"Printing Iteratetively"<<endl;
    printList(head);
    cout<<"endl";
    cout<<"Printing Recursively"<<endl;
    printRecursively(head);

    return 0;
}