#include<iostream>
using namespace std;

int unique(int n,int a[])
{
    int u=0;
    for(int i=0;i<32;i++)
    {
        int sum=0;
        for(int j=0;j<n;j++)
        {
            if(a[j]&1<<i)
            {
                sum++;
            }
        }
        if(sum%3)
        {
            u|=1<<i;
        }
    }
    return u;

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