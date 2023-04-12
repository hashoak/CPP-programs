#include<bits/stdc++.h>
using namespace std;

bool threeSum(int *a,int n,int t)
{
    int s;
    sort(a,a+n);
    for(int i=0;a[i]<=t;i++)
    {
        s=t-a[i];
        int j=i+1,k=n-1;
        while(j<k)
        {
            if(a[j]+a[k]>s) k--;
            else if(a[j]+a[k]<s) j++;
            else return 1;
        }
    }
    return 0;
}

int main()
{
    int n,t;
    cin>>n>>t;
    int a[n];
    for(auto &i:a) cin>>i;
    cout<<threeSum(a,n,t)<<"\n";
    return 0;
}