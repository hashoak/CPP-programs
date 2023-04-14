#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    for(auto &i:a) cin>>i;
    int i=0,z=0,ans=0;
    for(int j=0;j<n;j++)
    {
        if(a[j]==0) z++;
        while(z>k)
        {
            if(a[i]==0) z--;
            i++;
        }
        ans=max(ans,j-i+1);

    }
    cout<<ans<<"\n";
    return 0;
}