#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x;
    cin>>n;
    vector<int> a,b;
    for(int i=0;i<n;i++) cin>>x,a.push_back(x);
    stack<pair<int,int>> s;
    for(int i=0;i<n;i++)
    {
        b.push_back(1);
        while(!s.empty() and a[i]>=s.top().first)
        {
            b[i]+=s.top().second;
            s.pop();
        }
        s.push({a[i],b[i]});
    }
    for(auto i:b) cout<<i<<" ";
    cout<<"\n";
    return 0;
}