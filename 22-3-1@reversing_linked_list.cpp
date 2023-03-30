#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
    int data;
    node* next;

    node(int val)
    {
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
    return;
}
void insertAtHead(node* &head, int val)
{
    node* n=new node(val);
    n->next=head;
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

void iterReverse(node* &head)
{
    node* p=NULL,*c=head,*n;
    while(c!=NULL)
    {
        n=c->next;
        c->next=p;
        p=c,c=n;
    }
    head=p;
    return;
}

node* recurReverse(node* &head)
{
    if(head==NULL||head->next==NULL)
    {
        return head;
    }
    node* nh=recurReverse(head->next);
    head->next->next=head;
    head->next=NULL;
    return nh;
}

int main()
{
    node *head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    display(head);
    iterReverse(head);
    display(head);
    head=recurReverse(head);
    display(head);
    return 0;
}