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


Node *deletehead(Node *head)
{
    if(head==NULL)
    {
        return NULL;
    }

    else{
        Node *temp = head -> next;
        delete head;
        return temp;
    }
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
    head = deletehead(head);

    // Display the modified linked list
    current = head;
    while (current != NULL) {
        cout << current->data << " ";
        current = current->next;
    }

    
    return 0;
}