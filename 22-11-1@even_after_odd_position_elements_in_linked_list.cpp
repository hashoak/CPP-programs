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

void evenafterodd(node* &head)
{
    node *odd=head,*even=head->next,*h2=even;
    while(odd->next!=NULL && even->next!=NULL)
    {
        odd->next=even->next;
        odd=odd->next;
        even->next=odd->next;
        even=even->next;
    }
    odd->next=h2;
    return;
}

int main()
{
    node* head=NULL;
    int n,x;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        insertAtTail(head,x);
    }
    display(head);
    evenafterodd(head);
    display(head);
    return 0;
}