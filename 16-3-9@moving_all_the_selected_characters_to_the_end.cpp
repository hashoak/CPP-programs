#include<iostream>
using namespace std;

string moved(string s,char x)
{
    if(s=="")
    {
        return "";
    }
    char t=s[0];
    s.erase(0,1);
    if(t==x)
    {
        return moved(s,x)+t;
    }
    return t+moved(s,x);
}

int main()
{
    string s;
    char x;
    cin>>s>>x;
    cout<<moved(s,x);
    return 0;
}