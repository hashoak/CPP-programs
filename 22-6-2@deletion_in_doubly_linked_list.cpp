#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
    int data;
    node* prev,*next;

    node(int val)
    {
        prev=NULL;
        data=val;
        next=NULL;
    }
};
void insertAtTail(node* &head, int val)
{
    node* n=new node(val);

    if(head==NULL)
    {
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
    n->prev=temp;
    return;
}
void insertAtHead(node* &head, int val)
{
    node* n=new node(val);
    n->next=head;
    if(head!=NULL) head->prev=n;
    head=n;
    return;
}
void display(node* head)
{
    if(head==NULL) cout<<"EMPTY\n";
    for(node* temp=head;temp!=NULL;temp=temp->next)
    {
        cout<<temp->data<<" ";
    }
    cout<<"\n";
    return;
}

void deleteAtHead(node* &head)
{
    node* del=head;
    head=head->next;
    if(head!=NULL) head->prev=NULL;
    delete del;
    return;
}

void deletion(node* &head, int val)
{
    if(head==NULL)
    {
        return;
    }

    node* temp=head,*del;
    if(temp->data==val)
    {
        del=head;
        head=temp->next;
        if(head!=NULL) head->prev=NULL;
    }

    while(temp->next!=NULL)
    {
        if(temp->next->data==val)
        {
            del=temp->next;
            temp->next=temp->next->next;
            if(temp->next!=NULL) temp->next->prev=temp;
            break;
        }
        temp=temp->next;
    }
    delete del;
    return;
}

int main()
{
    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    display(head);
    deletion(head,3);
    display(head);
    deleteAtHead(head);
    display(head);
    deletion(head,5);
    display(head);
    deletion(head,2);
    display(head);
    deletion(head,4);
    display(head);
    return 0;
}