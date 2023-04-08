#include<iostream>
#include<queue>
using namespace std;

class stack
{
    queue<int> q1,q2;
    public:
    void push(int x)
    {
        q1.push(x);
    }
    void pop()
    {
        if(q1.empty())
        {
            cout<<"Stack underflow\n";
            return;
        }
        while(q1.size()!=1)
        {
            q2.push(q1.front());
            q1.pop();
        }
        q1.pop();
        queue<int> t=q1;
        q1=q2;
        q2=t;
    }
    int top()
    {
        if(q1.empty())
        {
            cout<<"Stack underflow\n";
            return -1;
        }
        while(q1.size()!=1)
        {
            q2.push(q1.front());
            q1.pop();
        }
        int x=q1.front();
        q2.push(x);
        q1.pop();
        queue<int> t=q1;
        q1=q2;
        q2=t;
        return x;
    }
    bool empty()
    {
        return q1.empty();
    }
};

int main()
{
    stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    cout<<s.top()<<"\n";
    s.pop();
    cout<<s.top()<<"\n";
    s.pop();
    cout<<s.top()<<"\n";
    s.pop();
    cout<<s.top()<<"\n";
    s.pop();
    cout<<s.empty()<<"\n";
    return 0;
}