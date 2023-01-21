#include<iostream>
using namespace std;

int main()
{
    cout<<"Type three numbers with spaces and press enter.\n";
    int a,b,c;
    cin>>a>>b>>c;

    if (a>b)
    {
        if (a>c)
        {
            cout<<a<<" is the greatest number.\n";
        }
        else
        {
            cout<<c<<" is the greatest number.\n";
        }
        
    }
    else
    {
        if(c<b)
        {
            cout<<b<<" is the greatest number.\n";
        }
        else
        {
            cout<<c<<" is the greatest number.\n";
        }
    }
    
    return 0;
}