#include<iostream>
using namespace std;
    
string k[]={"","./","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

void comb(string s,string a)
{
    if(s=="")
    {
        cout<<a<<"\n";
        return;
    }
    string p=k[s[0]-'0'];
    s.erase(0,1);
    for(int i=0;i<p.length();i++)
    {
        comb(s,a+p[i]);
    }
}


int main()
{
    string s;
    cin>>s;
    comb(s,"");
    return 0;
}