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
    for(node* temp=head;temp!=NULL;temp=temp->next)
    {
        cout<<temp->data<<" ";
    }
    cout<<"\n";
    return;
}

bool search(node* head, int key)
{
    for(node* temp=head;temp!=NULL;temp=temp->next)
    {
        if(temp->data==key)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    display(head);
    insertAtHead(head,2);
    insertAtHead(head,3);
    display(head);
    cout<<search(head,1)<<"\n";
    cout<<search(head,5)<<"\n";
    return 0;
}