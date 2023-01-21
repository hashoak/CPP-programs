#include<iostream>
using namespace std;

int main()
{
    cout<<"Enter the lengths of the triangle with spaces and press enter\n";
    int l1,l2,l3;
    cin>>l1>>l2>>l3;

    if(l1==l2&&l2==l3)
    {
        cout<<"The triangle is Equilateral\n";
    }
    else if(l1==l2||l2==l3||l3==l1)
    {
        cout<<"The triangle is Isosceles\n";
    }
    else
    {
        cout<<"The triangle is Scalene\n";
    }
    
    return 0;
}