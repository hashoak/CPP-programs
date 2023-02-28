#include<iostream>
using namespace std;

void pFactor(int n)
{
    int a[n+1]={0};
    for(int i=2;i<=n;i++)
    {
        if(!a[i])
        {
            a[i]=i;
            for(int j=i*i;j<=n;j+=i)
            {
                if(!a[j])
                {
                    a[j]=i;
                }
            }
        }
    }
    while(n!=1)
    {
        cout<<a[n]<<" ";
        n/=a[n];
    }
    return;
}

int main()
{
    int n;
    cin>>n;
    pFactor(n);    
    return 0;
}