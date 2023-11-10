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


Node *deletetail(Node *head)
{
    if(head==NULL)
    {
        return NULL;
    }

   if(head -> next == NULL)
   {
    delete head;
    return NULL;
   }

   Node *curr = head;
    while(curr -> next ->next !=NULL)
    {
        curr = curr -> next ;
    }
    delete( curr -> next );
    curr -> next = NULL;
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