#include<iostream>
using namespace std;

int fo(int n,int a[],int k,int i)
{
    if(i==n)
    {
        return -1;
    }
    if(a[i]==k)
    {
        return i;
    }
    return fo(n,a,k,i+1);
}

int lo(int n,int a[],int k,int i)
{
    if(i==-1)
    {
        return -1;
    }
    if(a[i]==k)
    {
        return i;
    }
    return lo(n,a,k,i-1);
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
    cout<<fo(n,a,k,0)<<"\n";
    cout<<lo(n,a,k,n);
    return 0;
}