#include<iostream>
using namespace std;

string check(int n)
{
    int c=0;
    for(int i=0;i<32;i++)
    {
        if((n&1<<i)!=0)
        {
            c++;
        }
    }
    if(c==1)
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