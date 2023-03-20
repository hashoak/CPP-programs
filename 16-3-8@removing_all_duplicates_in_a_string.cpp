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
    for(int i=0;i<s.length();i++)
    {
        if(c==t[i])
        {
            t.erase(i,1);
            break;
        }
    }
    return c+t;
}

int main()
{
    string s;
    cin>>s;
    cout<<nodupe(s);
    return 0;
}