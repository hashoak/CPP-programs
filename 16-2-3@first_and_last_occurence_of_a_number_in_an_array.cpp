#include<iostream>
using namespace std;

int fo(int n,int a[],int k)
{
    if(n==-1)
    {
        return -1;
    }
    if(fo(n-1,a,k)==-1 && a[n]==k)
    {
        return n;
    }
    return fo(n-1,a,k);
}

int lo(int n,int a[],int k)
{
    if(n==-1)
    {
        return -1;
    }
    if(a[n]==k)
    {
        return n;
    }
    return lo(n-1,a,k);
}

int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<fo(n,a,k)<<"\n";
    cout<<lo(n,a,k);
    return 0;
}