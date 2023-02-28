#include<iostream>
using namespace std;

void prime(int n,int m)
{
    bool a[m+1]={0};
    for(int i=2;i<=m;i++)
    {
        if(!a[i])
        {
            if(n<=i)
            {
                cout<<i<<" ";
            }
            for(int j=i*i;j<=m;j+=i)
            {
                a[j]=1;
            }
        }
    }
    return;
}

int main()
{
    int n,m;
    cin>>n>>m;
    prime(n,m);    
    return 0;
}