#include<iostream>
using namespace std;

void permutations(string s,string a)
{
    if(s=="")
    {
        cout<<a<<"\n";
        return;
    }
    for(int i=0;i<s.length();i++)
    {
        string s1=s.substr(0,i)+s.substr(i+1);
        permutations(s1,a+s[i]);
    }
}

int main()
{
    string s;
    cin>>s;
    permutations(s,"");
    return 0;
}