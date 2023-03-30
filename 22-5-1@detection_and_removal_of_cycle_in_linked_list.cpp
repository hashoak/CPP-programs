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
void makecycle(node* &head, int p)
{
    node* temp=head,*c;
    for(int i=1;temp->next!=NULL;i++)
    {
        if(i==p) c=temp;
        temp=temp->next;
    }
    temp->next=c;
    return;
}

bool detectcycle(node* head)
{
    node* s=head,*f=head;
    while(f!=NULL && f->next!=NULL)
    {
        s=s->next;
        f=f->next->next;
        if(s==f)
        {
            return 1;
        }
    }
    return 0;
}

void removecycle(node* head)
{
    node* s=head,*f=head;
    while(f!=NULL && f->next!=NULL)
    {
        s=s->next;
        f=f->next->next;
        if(s==f)
        {
            f=head;
            while(s->next!=f->next)
            {
                s=s->next;
                f=f->next;
            }
            s->next=NULL;
            return;
        }
    }
    return;
}

int main()
{
    node *head=NULL;
    int n,c,x;
    cin>>n>>c;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        insertAtTail(head,x);
    }
    makecycle(head,c);
    cout<<detectcycle(head)<<"\n";
    removecycle(head);
    cout<<detectcycle(head)<<"\n";
    display(head);
    return 0;
}