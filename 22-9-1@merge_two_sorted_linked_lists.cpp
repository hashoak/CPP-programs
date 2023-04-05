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
    if(head==NULL) cout<<"EMPTY\n";
    for(node* temp=head;temp!=NULL;temp=temp->next)
    {
        cout<<temp->data<<" ";
    }
    cout<<"\n";
    return;
}

node* itermerge(node* &h1,node* &h2)
{
    node *iter1=h1,*iter2=h2;
    node* h3=new node(-1);
    node* iter3=h3;
    while(iter1!=NULL && iter2!=NULL)
    {
        if(iter1->data<iter2->data)
        {
            iter3->next=iter1;
            iter1=iter1->next;
        }
        else
        {
            iter3->next=iter2;
            iter2=iter2->next;
        }
        iter3=iter3->next;
    }
    if(iter1!=NULL) iter3->next=iter1;
    else iter3->next=iter2;
    return h3->next;
}

node* recurmerge(node* &h1,node* &h2)
{
    if(h1==NULL || h2==NULL)
    {
        if(h1!=NULL) return h1;
        else return h2;
    }
    node* result;
    if(h1->data<h2->data)
    {
        result=h1;
        result->next=recurmerge(h1->next,h2);
    }
    else
    {
        result=h2;
        result->next=recurmerge(h1,h2->next);
    }
    return result;
}

int main()
{
    node* h1=NULL,*h2=NULL,*h3;
    int n1,n2,x;
    cin>>n1;
    for(int i=0;i<n1;i++)
    {
        cin>>x;
        insertAtTail(h1,x);
    }
    cin>>n2;
    for(int i=0;i<n2;i++)
    {
        cin>>x;
        insertAtTail(h2,x);
    }
    display(h1);
    display(h2);
    // h3=itermerge(h1,h2);
    h3=recurmerge(h1,h2);
    display(h1);
    display(h2);
    display(h3);
    return 0;
}