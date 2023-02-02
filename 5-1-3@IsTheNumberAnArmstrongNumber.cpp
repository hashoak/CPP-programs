#include<iostream>
using namespace std;

int main()
{
    cout<<"Type the number and press enter.\n";
    int n;
    cin>>n;

    int q=n;
    int a;
    int sum=0;
    while(q>0)
    {
        a=q%10;
        q=q/10;
        sum=sum+a*a*a;
    }
    if(sum==n)
    {
        cout<<"It's an Armstrong number.\n";
    }
    else
    {
        cout<<"It's not an Armstrong number.\n";
    }
    return 0;
}