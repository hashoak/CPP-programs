#include<iostream>
using namespace std;

void prime(int n)
{
    bool a[n+1]={0};
    for(int i=2;i<=n;i++)
    {
        if(!a[i])
        {
            cout<<i<<" ";
            for(int j=i*i;j<=n;j+=i)
            {
                a[j]=1;
            }
        }
    }
    return;
}

int main()
{
    int n;
    cin>>n;
    prime(n);    
    return 0;
}