#include<iostream>
#include<deque>
#include<set>
#include<vector>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    for(auto &i:a) cin>>i;
    multiset<int,greater<int>> s;
    vector<int> ans;
    for(int i=0;i<k;i++) s.insert(a[i]);
    ans.push_back(*s.begin());
    for(int i=k;i<n;i++)
    {
        s.erase(s.lower_bound(a[i-k]));
        s.insert(a[i]);
        ans.push_back(*s.begin());
    }
    for(int i=0;i<n-k+1;i++) cout<<ans[i]<<" ";
    return 0;
}