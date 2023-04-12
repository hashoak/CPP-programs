#include<iostream>
#include<stack>
#include<vector>
using namespace std;

void print(stack<int> s)
{
    if(s.empty()) return;
    int x=s.top();
    s.pop();
    print(s);
    cout<<x;
    return;
}

int main()
{
    int n,x;
    cin>>n;
    vector<int> a;
    for(int i=0;i<n;i++) cin>>x,a.push_back(x);
    stack<int> s;
    int ans=0;
    for(int i=0;i<n;i++)
    {
        while(!s.empty() and a[s.top()]<a[i])
        {
            int c=s.top();
            s.pop();
            if(s.empty()) break;
            int d=i-s.top()-1;
            ans+=(min(a[s.top()],a[i])-a[c])*d;
        }
        s.push(i);
    }
    cout<<ans<<"\n";
    return 0;
}