#include<iostream>
#include<stack>
using namespace std;

class queue
{
    stack<int> s1,s2;
    public:
    void enqueue(int x)
    {
        s1.push(x);
    }
    void dequeue()
    {
        if(s1.empty() and s2.empty())
        {
            cout<<"Queue underflow\n";
            return;
        }
        if(s2.empty())
        {
            while(!s1.empty()) s2.push(s1.top()), s1.pop();
        }
        s2.pop();
    }
    int peek()
    {
        if(s1.empty() and s2.empty())
        {
            cout<<"Queue underflow\n";
            return -1;
        }
        if(s2.empty())
        {
            while(!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
        }
        return s2.top();
    }
    bool empty()
    {
        return s1.empty() and s2.empty();
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