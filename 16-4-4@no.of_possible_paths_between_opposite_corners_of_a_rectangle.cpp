#include<iostream>
using namespace std;

int maze(int n,int m,int a,int b)
{
    if(a==n || b==m)
    {
        return 1;
    }
    return maze(n,m,a+1,b)+maze(n,m,a,b+1);
}

int main()
{
    int n,m;
    cin>>n>>m;
    cout<<maze(n,m,1,1);
    return 0;
}