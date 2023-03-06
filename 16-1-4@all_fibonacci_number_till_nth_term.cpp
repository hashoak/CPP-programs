#include<iostream>
using namespace std;

void fibo(int n,int a, int b)
{
    if(n==0)
    {
        return;
    }
    cout<<a<<" ";
    fibo(n-1,b,b+a);
}

int main()
{
    int n;
    cin>>n;
    fibo(n,0,1);
    return 0;
}