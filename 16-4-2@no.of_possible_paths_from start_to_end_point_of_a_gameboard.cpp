#include<iostream>
using namespace std;

int gameboard(int a,int b)
{
    if(a==b)
    {
        return 1;
    }
    if(a>b)
    {
        return 0;
    }
    int c=0;
    for(int i=1;i<=6;i++)
    {
        c+=gameboard(a+i,b);
    }
    return c;
}

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<gameboard(a,b);
    return 0;
}