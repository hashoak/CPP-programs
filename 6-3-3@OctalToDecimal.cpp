#include<iostream>
using namespace std;

int decimal(int o)
{
    int d=0;
    for(int i=1;o>0;i*=8)
    {
        d+=(o%10)*i;
        o/=10;
    }
    return d;
}

int main()
{
    cout<<"Type the octal representation and press enter.\n";
    int o;
    cin>>o;

    cout<<decimal(o)<<endl;
    return 0;
}