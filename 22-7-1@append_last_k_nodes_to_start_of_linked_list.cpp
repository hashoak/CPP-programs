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
int length(node* head)
{
    int l;
    for(l=1;head->next!=NULL;l++) head=head->next;
    return l;
}

void kappend(node* &head,int k)
{
    node* temp=head,*nh;
    int l=length(head);
    for(int i=1;i<l-k;i++) temp=temp->next;
    nh=temp->next;
    temp->next=NULL;
    temp=nh;
    while(temp->next!=NULL) temp=temp->next;
    temp->next=head;
    head=nh;
    return;
}

int main()
{
    node* head=NULL;
    int n,k,x;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        insertAtTail(head,x);
    }
    kappend(head,k);
    display(head);
    return 0;
}