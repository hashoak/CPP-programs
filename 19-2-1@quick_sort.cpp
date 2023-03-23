#include<iostream>
using namespace std;

int partition(int *a,int s,int e)
{
    int f=(s+e)/2,t[e-s+1],x=0,y=e-s;
    for(int i=s;i<=e;i++)
    {
        if(i!=f)
        {
            if(a[i]<a[f])
            {
                t[x]=a[i];
                x++;
            }
            else
            {
                t[y]=a[i];
                y--;
            }
        }
    }
    t[x]=a[f];
    for(int i=s;i<=e;i++)
    {
        a[i]=t[i-s];
    }
    return x+s;
}

void quicksort(int* a,int s,int e)
{
    if(s>=e)
    {
        return;
    }
    int p=partition(a,s,e);
    quicksort(a,s,p-1);
    quicksort(a,p+1,e);
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
    quicksort(a,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}