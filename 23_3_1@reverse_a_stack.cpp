#include<iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<int> &s,int e)
{
    if(s.empty())
    {
        s.push(e);
        return;
    }
    int ee=s.top();
    s.pop();
    insertAtBottom(s,e);
    s.push(ee);
}

void reverse(stack<int> &s)
{
    if(s.empty()) return;
    int e=s.top();
    s.pop();
    reverse(s);
    insertAtBottom(s,e);
}

int main()
{
    int n,x;
    cin>>n;
    stack<int> s;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        s.push(x);
    }
    reverse(s);
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}