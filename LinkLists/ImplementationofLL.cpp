#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int x)
    {
        data=x;
        next=NULL;
    }
};


int main()
{
    //Method 1 of traversing (Long Way)
    /* Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);
    head -> next = temp1;
    temp1 -> next =temp2; */

    //Method 2 of traversing (Short Way )
    Node *head = new Node(100);
    head -> next =new Node(200);
    head -> next -> next =new Node(300);

    //Traversal From Here 
    Node* current = head;

    while(current!=NULL)
    {
        cout << current->data << " ";
        current =  current -> next;
    }

    //Method
    return 0;
}
