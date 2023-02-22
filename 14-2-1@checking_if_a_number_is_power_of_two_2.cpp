#include<iostream>
using namespace std;

string check(int n)
{
    if(n!=0 && (n&(n-1))==0)
    {
        return "Yes";
    }
    return "No";
}

int main()
{
    int n;
    cin>>n;
    cout<<check(n);
    return 0;
}