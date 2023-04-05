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

void createinter(node* &h1,node* &h2,int in)
{
    node *inter1=h1,*inter2=h2;
    in--;
    while(in--) inter1=inter1->next;
    while(inter2->next!=NULL) inter2=inter2->next ;
    inter2->next=inter1;
    return;
}

int detectinter(node* h1,node* h2)
{
    int l1=length(h1),l2=length(h2);
    node* iter1=h1,*iter2=h2;
    for(int i=0;i<l1-l2;i++) iter1=iter1->next;
    for(int p=l1-l2+1;iter1->next!=NULL && iter2->next!=NULL;p++)
    {
        if(iter1->data==iter2->data)
        {
            return p;
        }
        iter1=iter1->next,iter2=iter2->next;
    }
    return -1;
}

int main()
{
    node* h1=NULL,*h2=NULL;
    int n1,n2,in,x;
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
    cin>>in;
    createinter(h1,h2,in);
    display(h1);
    display(h2);
    cout<<detectinter(h1,h2);
    return 0;
}