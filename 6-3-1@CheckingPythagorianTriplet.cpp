#include<iostream>
using namespace std;

int max(int a, int b)
{
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

bool check(int a, int b, int c)
{
    int m=max(a, max(b,c));
    if(a*a+b*b+c*c-m*m==m*m)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    cout<<"Type the numbers with spaces and press enter.\n";
    int a,b,c;
    cin>>a>>b>>c;

    if(check(a,b,c))
    {
        cout<<"It's a Pythagorean triplet.\n";
    }
    else
    {
        cout<<"It's not a Pythagorean triplet.\n";
    }
    return 0;
}