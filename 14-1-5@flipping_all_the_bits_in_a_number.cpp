#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i=0;
    while(1<<i<=n)
    {
        i++;
    }
    cout<<((1<<i)-1)-n;
    return 0;
}