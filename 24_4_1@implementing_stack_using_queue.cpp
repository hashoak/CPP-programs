#include<iostream>
#include<queue>
using namespace std;

class stack
{
    queue<int> q1,q2;
    public:
    void push(int x)
    {
        q2.push(x);
        while(!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }
        queue<int> t=q1;
        q1=q2;
        q2=t;
    }
    void pop()
    {
        if(q1.empty())
        {
            cout<<"Stack underflow\n";
            return;
        }
        q1.pop();
    }
    int top()
    {
        if(q1.empty())
        {
            cout<<"Stack underflow\n";
            return -1;
        }
        return q1.front();
    }
    bool empty()
    {
        return q1.empty();
    }
};

int main()
{
    stack q;
    q.push(1);
    q.push(2);
    q.push(3);
    cout<<q.top()<<"\n";
    q.pop();
    cout<<q.top()<<"\n";
    q.pop();
    cout<<q.top()<<"\n";
    q.pop();
    cout<<q.top()<<"\n";
    q.pop();
    cout<<q.empty()<<"\n";
    return 0;
}