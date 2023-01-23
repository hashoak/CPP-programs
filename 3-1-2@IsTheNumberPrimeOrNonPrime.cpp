#include<iostream>
using namespace std;

int main()
{
    cout<<"Type the number.\n";
    int n;
    cin>>n;

    int i;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            cout<<"The number is non prime.\n";
            break;
        }
    }
    if(i==n)
        {
            cout<<"The number is prime.\n";
        }
    return 0;
}