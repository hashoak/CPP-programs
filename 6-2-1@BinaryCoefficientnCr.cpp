#include<iostream>
using namespace std;

int fact(int a)
{
    int fact=1;
    for(int i=1;i<=a;i++)
    {
        fact*=i;
    }
    return fact;
}
int main()
{
    cout<<"Type the two numbers in descending order with spaces anf press enter.\n";
    int n,r;
    cin>>n>>r;

    int ncr=(fact(n)/(fact(r)*fact(n-r)));
    cout<<ncr<<endl;
    return 0;
}