#include<iostream>
using namespace std;

string nodupe(string s)
{
    if(s=="")
    {
        return "";
    }
    char c=s[0];
    s.erase(0,1);
    string t=nodupe(s);
    if(c==t[0])
    {
        return t;
    }
    else
    {
        return c+t;
    }
}

int main()
{
    string s;
    cin>>s;
    cout<<nodupe(s);
    return 0;
}