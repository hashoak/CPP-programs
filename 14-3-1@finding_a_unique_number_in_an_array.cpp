#include<iostream>
using namespace std;

int unique(int n,int a[])
{
    int xs=0;
    for(int i=0;i<n;i++)
    {
        xs^=a[i];
    }
    return xs;
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
    cout<<unique(n,a);
    return 0;
}