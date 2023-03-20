#include<iostream>
using namespace std;

void toh(int n,char s,char d,char h)
{
    if(n==0)
    {
        return;
    }
    toh(n-1,s,h,d);
    cout<<"Move from "<<s<<" to "<<d<<"\n";
    toh(n-1,h,d,s);
}

int main()
{
    while(1)
    {
        int n;
        cin>>n;
        toh(n,'A','B','C');
    }
    return 0;
}