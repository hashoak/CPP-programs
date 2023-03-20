#include<iostream>
using namespace std;

string reverse(string s,int n)
{
    if(n/2==0)
    {
        return s;
    }
    char c=s[n/2-1];
    s[n/2-1]=s[s.length()-n/2];
    s[s.length()-n/2]=c;
    return reverse(s,n-2);
}

int main()
{
    string s;
    cin>>s;
    cout<<rev(s,s.length());
    return 0;
}