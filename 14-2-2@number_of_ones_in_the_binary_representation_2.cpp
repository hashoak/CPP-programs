#include<iostream>
using namespace std;

int check(int n)
{
    int c=0;
    while(n)
    {
        n=n&(n-1);
        c++;
    }
    return c;
}

int main()
{
    int n;
    cin>>n;
    cout<<check(n);
    return 0;
}