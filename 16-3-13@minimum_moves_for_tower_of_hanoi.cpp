#include<iostream>
using namespace std;

int toh(int n)
{
    if(n==1)
    {
        return 1;
    }
    int p=toh(n-1);
    return 2*p+1;
}

int main()
{
    while(1)
    {
        int n;
        cin>>n;
        cout<<toh(n);
    }
    return 0;
}