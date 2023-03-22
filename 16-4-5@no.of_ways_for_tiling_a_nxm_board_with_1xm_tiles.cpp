#include<iostream>
using namespace std;

int tiling(int n,int m)
{
    if(n<m)
    {
        return 1;
    }
    else if(n==m)
    {
        return 2;
    }
    return tiling(n-1,m)+tiling(n-m,m);
}

int main()
{
    int n,m;
    cin>>n>>m;
    cout<<tiling(n,m);
    return 0;
}