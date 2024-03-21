#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(Node* &head, int data)
{
    Node* new_node = new Node(data);
    new_node->next = head;
    head = new_node;
}
void insertAtTail(Node* &head, int data)
{
    Node* new_node = new Node(data);
    Node* temp = head;
    while (temp->next!=nullptr)
    {
        temp = temp->next;
    }
    temp->next = new_node;  
}
void insertAtPosition(Node* &head, int data, int pos)
{
    if (pos==0)
    {
        insertAtHead(head,data);
        return;
    }
    
    Node* new_node = new Node(data);
    Node* temp = head;
    int current_posi = 0;
    while (current_posi!=pos-1)     
    {
        temp = temp->next;
        current_posi++;
    }
    new_node->next = temp->next;
    temp->next = new_node;
    
}
// DELETION

void deleteAtHead(Node* &head)
{
    Node* temp = head;
    head = head->next;
    free(temp);
}
void deleteAtTail (Node* &head)
{
    Node* second_last = head;
    while (second_last->next->next!=NULL)
    {
        second_last = second_last->next;
    }
    Node* temp = second_last->next;
    second_last->next = NULL;
    free(temp);
    
}
// REVERSING 

void reverseLL(Node* &head)
{
    Node* prevptr = nullptr;
    Node* currptr = head;

    while (currptr!=nullptr)
    {
        Node* nextptr = currptr->next;
        currptr->next = prevptr;
        prevptr = currptr;
        currptr = nextptr;
    }
    head = prevptr;
    
}

void display(Node* head){
    Node* temp = head;
    while (temp!=nullptr)
    {
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}
int main()
{
    Node* head = NULL;
    insertAtHead(head,3);
    insertAtHead(head,2);
    insertAtHead(head,1);
    insertAtPosition(head,4,3);
    insertAtTail(head,5); 
    deleteAtHead(head);
    deleteAtTail(head);
    display(head);
    reverseLL(head);
    display(head);
    return 0;
}