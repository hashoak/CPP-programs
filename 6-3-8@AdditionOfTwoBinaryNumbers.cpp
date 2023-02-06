#include<iostream>
using namespace std;

int addBinary(int a, int b)
{
    int s=0;
    int e=0;
    int i;
    for(i=1;a>0||b>0;i*=10)
    {
        int la=a%10;
        int lb=b%10;
        int c=e+la+lb;
        int lc;
        if(c==0)
        {
            lc=c;
            e=0;
        }
        else if(c==1)
        {
            lc=c;
            e=0;
        }
        else
        {
            lc=c-2;
            e=1;
        }
        s+=lc*i;
        a/=10;
        b/=10;
    }
    if(e==1)
    {
        s+=i;
    }
    return s;
}

int main()
{
    cout<<"Type the two binary numbers with space and press enter.\n";
    int a,b;
    cin>>a>>b;

    cout<<addBinary(a,b)<<endl;
    return 0;
}