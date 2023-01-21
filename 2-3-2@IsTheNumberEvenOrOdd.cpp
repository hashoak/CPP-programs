#include<iostream>
using namespace std;

int main()
{
    cout<<"Type the number and press enter\n";
    
    int n;
    cin>>n;
    
    if(n%2==0)
    {
        cout<<"The number is even\n";
    }
    else
    {
        cout<<"The number is odd\n";
    }
    return 0;
}