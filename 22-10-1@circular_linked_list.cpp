#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
    int data;
    node* next;

    node(int val){
        data=val;
        next=NULL;
    }
};

void insertAtTailcirc(node* &head,int val)
{
    node*n=new node(val);
    if(head==NULL)
    {
        n->next=n;
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=head) temp=temp->next;
    temp->next=n;
    n->next=head;
    return;
}

void insertAtHeadcirc(node* &head,int val)
{
    node*n=new node(val);
    if(head==NULL)
    {
        n->next=n;
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=head) temp=temp->next;
    temp->next=n;
    n->next=head;
    head=n;
    return;
}

void displaycirc(node* head)
{
    if(head==NULL)
    {
        cout<<"EMPTY\n";
        return;
    }
    node* temp=head;
    do
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }while(temp!=head);
    cout<<"\n";
    return;
}

void deletioncirc(node* &head,int pos)
{
    if(head==NULL) return;
    node* temp=head,*d;
    if(pos==1)
    {
        while(temp->next!=head) temp=temp->next;   
        if(temp->next->next!=head) head=temp->next->next;
        else head=NULL;
    }
    for(int i=1;i<pos-1;i++) temp=temp->next;
    d=temp->next;
    temp->next=temp->next->next;
    delete d;
    return;
}

void deleteAtHeadcrc(node* &head)
{
    node* temp=head,*d;
    while(temp->next!=head) temp=temp->next;   
    if(temp->next->next!=head) head=temp->next->next;
    else head=NULL;
    d=temp->next;
    temp->next=temp->next->next;
    delete d;
    return;
}

int main()
{
    node* head=NULL;
    insertAtTailcirc(head,1);
    insertAtTailcirc(head,2);
    insertAtTailcirc(head,3);
    insertAtHeadcirc(head,4);
    insertAtHeadcirc(head,5);
    displaycirc(head);
    deletioncirc(head,3);
    displaycirc(head);
    deletioncirc(head,6);
    displaycirc(head);
    deletioncirc(head,3);
    displaycirc(head);
    deletioncirc(head,2);
    displaycirc(head);
    deleteAtHeadcrc(head);
    displaycirc(head);
    return 0;
}