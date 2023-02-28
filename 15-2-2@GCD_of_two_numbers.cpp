#include<iostream>
using namespace std;

int GCD(int a,int b)
{
    while(a%b)
    {
        int rem=a%b;
        a=b;
        b=rem;
    }
    return b;
}

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<GCD(a,b);
    return 0;
}