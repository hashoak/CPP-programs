#include<iostream>
using namespace std;

int maze(int n,int a,int b)
{
    if(a==n || b==n)
    {
        return 1;
    }
    return maze(n,a+1,b)+maze(n,a,b+1);
}

int main()
{
    int n;
    cin>>n;
    cout<<maze(n,1,1);
    return 0;
}