#include<iostream>
using namespace std;

void merge(int* a,int s,int m,int e)
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
            t[k]=a[j];
            j++;
        }
    }
    for(int i=s;i<=e;i++)
    {
        a[i]=t[i-s];
    }
}

void mergesort(int* a,int s,int e)
{
    if(s==e)
    {
        return;
    }
    int m=(s+e)/2;
    mergesort(a,s,m);
    mergesort(a,m+1,e);
    
    merge(a,s,m,e);
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
    mergesort(a,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<' ';
    }
    return 0;
}