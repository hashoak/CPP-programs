#include<iostream>
using namespace std;

int octal(int d)
{
    int o=0;
    for(int i=1;d>0;i*=10)
    {
        o+=(d%8)*i;
        d/=8;
    }
    return o;
}

int main()
{
    cout<<"Type the decimal representation and press enter.\n";
    int d;
    cin>>d;

    cout<<octal(d)<<endl;
    return 0;
}