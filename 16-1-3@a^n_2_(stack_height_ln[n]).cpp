#include<iostream>
using namespace std;

int pow(int a,int n)
{
    if(n==1)
    {
        return a;
    }
    int p=pow(a,n/2);
    if(n%2)
    {
        return p*p*a;
    }
    return p*p;
}

int main()
{
    int a,n;
    cin>>a>>n;
    cout<<pow(a,n);
    return 0;
}