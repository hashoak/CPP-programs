#include<iostream>
using namespace std;

int main()
{
    cout<<"Type the number and press enter.\n";
    int n;
    cin>>n;

    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            cout<<"Not prime.\n";
            return 0;
        }
    }
    if(n<=1)
    {
        cout<<"Not prime.\n";
        return 0;
    }
    cout<<"Prime.\n";
    return 0;
}