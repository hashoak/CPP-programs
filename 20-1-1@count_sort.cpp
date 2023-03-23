#include<iostream>
using namespace std;

void countsort(int a[],int n)
{
    int i=0,m=0;
    for(i=0;i<n;i++)
    {
        m=max(m,a[i]);
    }
    int b[m+1]={0};
    for(i=0;i<n;i++)
    {
        b[a[i]]++;
    }
    for(i=1;i<=m;i++)
    {
        b[i]+=b[i-1];
    }
    int ans[n];
    for(i=n-1;i>=0;i--)
    {
        ans[--b[a[i]]]=a[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<ans[i]<<" ";
    }
    return;
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    countsort(a,n);
    return 0;
}