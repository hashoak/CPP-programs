#include<iostream>
using namespace std;

int ndivi(int a,int b,int n)
{
    int da=n/a;
    int db=n/b;
    int dc=n/(a*b);
    return (da+db-dc);
}

int main()
{
    int a,b,n;
    cin>>n>>a>>b;
    cout<<ndivi(a,b,n);
    return 0;
}