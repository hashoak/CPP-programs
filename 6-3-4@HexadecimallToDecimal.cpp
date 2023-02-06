#include<bits/stdc++.h>
using namespace std;

int decimal(string h)
{
    int d=0;
    int s=h.size();
    int x=1;
    for(int i=s-1;i>=0;i--)
    {
        if(h[i]>='0'&&h[i]<='9')
        {
            d+=(h[i]-'0')*x;
        }
        else if(h[i]>='A'&&h[i]<='F')
        {
            d+=(h[i]-'A'+10)*x;
        }
        x*=16;
    }
    return d;
}

int main()
{
    cout<<"Type the hexadecimal representation and press enter.\n";
    string h;
    cin>>h;

    cout<<decimal(h)<<endl;
    return 0;
}