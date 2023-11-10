#include<bits/stdc++.h>
using namespace std;

struct Node{
    Node *next;
    int data;
    Node(int x){
        data=x;
        next=NULL;
    }
};


Node insertPos(Node *head, int pos,int data)
{
    Node *temp = new Node(data);
    if(pos == 1)
    {
        temp -> next = head;
        return temp;
    }

    Node *curr = head;
    for (int i = 0; i < pos-2 && curr!=NULL ; i++)
    {
        curr = curr -> next;
    }

    if(curr == NULL)
    {
        return head;
    }

    temp -> next = curr -> next;
    curr -> next = temp;

    return head;
    
}

int main()
{
     Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);

    // Display the original linked list
    Node *current = head;
    while (current != NULL) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;

    // Delete the head node
    head = deletetail(head);

    // Display the modified linked list
    current = head;
    while (current != NULL) {
        cout << current->data << " ";
        current = current->next;
    }

    
    return 0;
}