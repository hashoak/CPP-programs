#include<iostream>
using namespace std;

void substrings(string s,string a)
{
    if(s=="")
    {
        cout<<"\""<<a<<"\"\n";
        return;
    }
    char d=s[0];
    string n=to_string(int(d));
    s.erase(0,1);
    substrings(s,a);
    substrings(s,a+d);
    substrings(s,n+a);
}

int main()
{
    string s;
    cin>>s;
    substrings(s,"");
    return 0;
}