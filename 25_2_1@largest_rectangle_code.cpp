#include<iostream>
#include<vector>
#include<stack>
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
    // int m,ans=0;
    // for(int i=0;i<n;i++)
    // {
    //     m=INT32_MAX;
    //     for(int j=0;j<n-i;j++)
    //     {
    //         m=min(m,a[i+j]);
    //         ans=max(ans,m*(j+1));
    //     }
    // }
    // cout<<ans<<"\n";
    stack<int> s;
    a.push_back(0);
    int ans=0;
    for(int i=0;i<=n;i++)
    {
        while(!s.empty() and a[s.top()]>a[i])
        {
            ans=max(ans,a[s.top()]*(i-s.top()));
            s.pop();
        }
        s.push(i);
    }
    cout<<ans<<"\n";
    return 0;
}
//                         
//           -              
//         - -               
//         - -               
//         - -   -          
// -   - - - - - - - -              
// - - - - - - - - - -               