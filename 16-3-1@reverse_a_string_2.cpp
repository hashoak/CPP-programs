#include<iostream>
using namespace std;

string reverse(string s)
{
    if(s.empty())
    {
        return "";
    }
    char c=s[0];
    s.erase(0,1);
    return reverse(s)+c;
}

int main()
{
    string s;
    cin>>s;
    cout<<reverse(s);
    return 0;
}