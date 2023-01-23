#include<iostream>
using namespace std;

int main()
{
    cout<<"Type the mathematical expression with spaces in between.\n";
    float a,b;
    char c;
    cin>>a>>c>>b;

    switch (c)
    {
    case '+':
        cout<<a+b<<endl;
        break;
    case '-':
        cout<<a-b<<endl;
        break;
    case '*':
        cout<<a*b<<endl;
        break;
    case '/':
        cout<<a/b<<endl;
        break;

    default:
    cout<<"syntax error!\n";
        break;
    }
    return 0;
}