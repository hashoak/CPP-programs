#include<iostream>
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

class queue
{
    node *front,*back;
    public:
    queue()
    {
        front=NULL,back=NULL;
    }
    void enqueue(int x)
    {
        node* n=new node(x);
        if(front==NULL)
        {
            back=n;
            front=n;
            return;
        }
        back->next=n;
        back=n;
    }
    void dequeue()
    {
        if(front==NULL)
        {
            cout<<"Queue underflow\n";
            return;
        }
        node* del=front;
        front=front->next;
        delete del;
    }
    int peek()
    {
        if(front==NULL)
        {
            cout<<"Queue underflow\n";
            return -1;
        }
        return front->data;
    }
    bool empty()
    {
        return front==NULL;
    }
};

int main()
{
    queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    cout<<q.peek()<<"\n";
    q.dequeue();
    cout<<q.peek()<<"\n";
    q.dequeue();
    cout<<q.peek()<<"\n";
    q.dequeue();
    cout<<q.peek()<<"\n";
    q.dequeue();
    cout<<q.empty()<<"\n";
    return 0;
}