#include<iostream>
using namespace std;

int pow(int a,int n)
{
    if(n==1)
    {
        return a;
    }
    return a*pow(a,n-1);
}

int main()
{
    int a,n;
    cin>>a>>n;
    cout<<pow(a,n);
    return 0;
}