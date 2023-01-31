#include<iostream>
using namespace std;

int main()
{
    cout<<"Type the number and press enter.\n";
    int n;
    cin>>n;

    bool flag=true;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            flag=false;
            break;
        }
    }
    if(n<=1)
    {
        flag=false;
    }
    if(flag)
    {
        cout<<"Prime.\n";
    }
    else
    {
        cout<<"Not prime.\n";
    }
    return 0;
}