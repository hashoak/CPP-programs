#include<iostream>
using namespace std;

int guests(int n)
{
    if(n==0||n==1)
    {
        return 1;
    }
    return guests(n-1)+(n-1)*guests(n-2);
}

int main()
{
    int n;
    cin>>n;
    cout<<guests(n);
}