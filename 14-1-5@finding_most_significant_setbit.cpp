#include<iostream>
using namespace std;

int sig(int n)
{
    for(int i=1;(n>>i)!=0;i*=2)
    {
        n|=n>>i;
    }
    return (n+1)>>1;
}

int main()
{
    int n;
    cin>>n;
    cout<<sig(n);
    return 0;
}