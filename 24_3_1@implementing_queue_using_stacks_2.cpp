#include<iostream>
#include<stack>
using namespace std;

class queue
{
    stack<int> s;
    public:
    void enqueue(int x)
    {
        s.push(x);
    }
    void dequeue()
    {
        if(s.empty())
        {
            cout<<"Queue underflow\n";
            return;
        }
        int x=s.top();
        s.pop();
        if(s.empty()) return;
        dequeue();
        s.push(x);
        return;
    }
    int peek()
    {
        if(s.empty())
        {
            cout<<"Queue underflow\n";
            return -1;
        }
        if(s.size()==1) return s.top();
        int x=s.top();
        s.pop();
        int topval=peek();
        s.push(x);
        return topval;
    }
    bool empty()
    {
        return s.empty();
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