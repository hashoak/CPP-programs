#include<iostream>
using namespace std;

int decimal(int b)
{
    int d=0;
    for(int i=1;b>0;i*=2)
    {
        d+=(b%10)*i;
        b/=10;
    }
    return d;
}

int main()
{
    cout<<"Type the binary representation and press enter.\n";
    int b;
    cin>>b;

    cout<<decimal(b)<<endl;
    return 0;
}