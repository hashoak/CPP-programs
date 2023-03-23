#include<iostream>
using namespace std;

long long merge(int* a,int s,int m,int e,long long inv)
{
    int t[e-s+1];
    int k,i=s,j=m+1;
    for(k=0;i<=m || j<=e;k++)
    {
        if(j>e)
        {
            t[k]=a[i];
            i++;
        }
        else if(i>m)
        {
            t[k]=a[j];
            j++;
        }
        else if(a[i]<=a[j])
        {
            t[k]=a[i];
            i++;
        }
        else if(a[i]>a[j])
        {
            inv+=m-i+1;
            t[k]=a[j];
            j++;
        }
    }
    for(int i=s;i<=e;i++)
    {
        a[i]=t[i-s];
    }
    return inv;
}

long long mergesort(int* a,int s,int e,long long inv)
{
    if(s==e)
    {
        return inv;
    }
    int m=(s+e)/2;
    inv=mergesort(a,s,m,inv);
    inv=mergesort(a,m+1,e,inv);

    return merge(a,s,m,e,inv);
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
    cout<<mergesort(a,0,n-1,0);
    return 0;
}