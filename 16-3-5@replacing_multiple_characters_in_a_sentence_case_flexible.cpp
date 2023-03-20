#include<iostream>
using namespace std;

string replace(string s,string e,string n)
{
    if(s=="")
    {
        return "";
    }
    string c,r=s.substr(0,e.length());
    bool f=1;
    for(int i=0;i<e.length();i++)
    {
        if(e[i]!=r[i] && e[i]!=r[i]+('a'-'A'))
        {
            f=0;
        }
    }
    if(f)
    {
        c=n;
        s.erase(0,e.length());
    }
    else
    {
        c=s[0];
        s.erase(0,1);
    }
    return c+replace(s,e,n);
}

int main()
{
    string s,e,n;
    getline(cin,s);
    getline(cin,e);
    getline(cin,n);
    cout<<replace(s,e,n);
    return 0;
}