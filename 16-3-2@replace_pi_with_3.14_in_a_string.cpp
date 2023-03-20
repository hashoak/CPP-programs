#include<iostream>
using namespace std;

string replace(string s)
{
    if(s=="")
    {
        return "";
    }
    string c;
    if(s[0]=='p'&&s[1]=='i')
    {
        c="3.14";
        s.erase(0,2);
    }
    else
    {
        c=s[0];
        s.erase(0,1);
    }
    return c+replace(s);
}

int main()
{
    string s;
    cin>>s;
    cout<<replace(s);
    return 0;
}