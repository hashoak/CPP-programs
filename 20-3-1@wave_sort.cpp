#include<iostream>
using namespace std;

void wave(int* a, int n)
{
    int t;
    for(int i=1;i<n;i+=2)
    {
        if(a[i]>a[i-1])
        {
            t=a[i]; a[i]=a[i-1]; a[i-1]=t;
        }
        if(a[i]>a[i+1] && i<n-1)
        {
            t=a[i]; a[i]=a[i+1]; a[i+1]=t;
        }
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
    wave(a,n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}