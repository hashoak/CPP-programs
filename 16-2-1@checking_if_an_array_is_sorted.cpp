#include<iostream>
using namespace std;

bool check(int n,int a[])
{
    if(n==2 || check(n-1,a))
    {
        return a[n-1]>a[n-2];
    }
    else
    {
        return 0;
    }
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
    if(check(n,a))
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
    return 0;
}