#include<iostream>
using namespace std;

int binary(int d)
{
    int b=0;
    for(int i=1;d>0;i*=10)
    {
        b+=(d%2)*i;
        d/=2;
    }
    return b;
}

int main()
{
    cout<<"Type the decimal representation and press enter.\n";
    int d;
    cin>>d;

    cout<<binary(d)<<endl;
    return 0;
}