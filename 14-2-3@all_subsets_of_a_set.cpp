#include<iostream>
using namespace std;

void subset(int n,int a[])
{
    for(int i=0;i<1<<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i&1<<j)
            {
                cout<<a[j]<<" ";
            }
        }
        cout<<endl;
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
    subset(n,a);
    return 0;
}