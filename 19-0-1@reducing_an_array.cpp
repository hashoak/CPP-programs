#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool myc(pair<int,int>v1,pair<int,int>v2)
{
    return v1.first<v2.first;
}

int main()
{
    int n;
    cin>>n;
    vector<pair<int,int>>vp;
    for(int i=0;i<n;i++)
    {
        int t;
        cin>>t;
        vp.push_back(make_pair(t,i));
    }
    sort(vp.begin(),vp.end(),myc);
    int a[n];
    for(int i=0;i<n;i++)
    {
        a[vp[i].second]=i;
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}