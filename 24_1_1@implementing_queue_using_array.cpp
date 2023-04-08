#include<iostream>
using namespace std;

#define n 100

class queue
{
    int* arr;
    int front,back;

    public:
    queue()
    {
        arr=new int[n];
        front=0,back=-1;
    }
    void enqueue(int x)
    {
        if(back==n-1)
        {
            cout<<"Queue overflow\n";
            return;
        }
        arr[++back]=x;
    }
    void dequeue()
    {
        if(front>back)
        {
            cout<<"No elements in queue\n";
            return;
        }
        front++;
    }
    int peek()
    {
        if(front>back)
        {
            cout<<"No elements in queue\n";
            return -1;
        }
        return arr[front];
    }
    bool empty()
    {
        return front>back;
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
}