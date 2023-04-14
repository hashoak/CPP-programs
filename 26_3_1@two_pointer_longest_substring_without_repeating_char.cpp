#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int a[26],i=-1,j=0,ans=0,l=s.length(),x;
    for(auto &x:a) x=-1;
    while(j<l)
    {
        x=s[j]-'a';
        if(a[x]!=-1) i=a[x];
        a[x]=j;
        ans=max(ans,j-i);
        j++;
    }
    cout<<ans<<"\n";
    return 0;
}