#include<iostream>
using namespace std;

int check(int n)
{
    int c=0;
    for(int i=0;i<32;i++)
    {
        if((n&1<<i)!=0)
        {
            c++;
        }
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