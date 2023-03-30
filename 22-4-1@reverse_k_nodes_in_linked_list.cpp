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

node* revk(node* &head,int k)
{
    node* p=NULL,*c=head,*n;
    for(int i=0;i<k && c!=NULL;i++)
    {
        n=c->next;
        c->next=p;
        p=c,c=n;
    }
    if(head!=NULL)
    {
        head->next=revk(c,k);
    }
    return p;
}

int main()
{
    node *head=NULL;
    int n,x,k;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        insertAtTail(head,x);
    }
    display(head);
    head=revk(head,k);
    display(head);
    return 0;
}