#include<iostream>
using namespace std;

string replace(string s,char e,char n)
{
    if(s=="")
    {
        return "";
    }
    char c;
    if(s[0]==e)
    {
        c=n;
    }
    else
    {
        c=s[0];
    }
    s.erase(0,1);
    return c+replace(s,e,n);
}

int main()
{
    string s;
    char e,n;
    getline(cin,s);
    cin>>e>>n;
    cout<<replace(s,e,n);
    return 0;
}