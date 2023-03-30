#include<iostream>
using namespace std;

void dnf(int *a, int n)
{
    int l=0, m=0, h=n-1,t;
    while(m!=h)
    {
        if(a[m]==0)
        {
            t=a[l]; a[l]=a[m]; a[m]=t;
            l++; m++;
        }
        else if(a[m]==2)
        {
            t=a[h]; a[h]=a[m]; a[m]=t;
            h--;
        }
        else
        {
            m++;
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
    dnf(a,n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}