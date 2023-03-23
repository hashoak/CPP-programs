#include<iostream>
using namespace std;

void swap(int *a,int i,int j)
{
    int t=a[i];
    a[i]=a[j];
    a[j]=t;
    return;
}

int partition(int *a,int s,int e)
{
    int p=a[e],i=s-1;
    for(int j=s;j<e;j++)
    {
        if(a[j]<p)
        {
            i++;
            swap(a,i,j);
        }
    }
    swap(a,i+1,e);
    return i+1;
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