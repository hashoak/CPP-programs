#include<iostream>
using namespace std;

string hexadecimal(int d)
{
    int h=0;
    for(int i=1;d>0;i*=10)
    {
        if(d%16<=9)
        {
            h+=(d%16)*i;
            d/=16;
        }
        else
        {
            char c='A'+ 
        }
    }
    return h;
}

int main()
{
    cout<<"Type the decimal representation and press enter.\n";
    int d;
    cin>>d;

    cout<<hexadecimal(d)<<endl;
    return 0;
}