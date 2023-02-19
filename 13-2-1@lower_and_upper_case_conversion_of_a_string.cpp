#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    cin>>s;

    string s1=s,s2=s;
    for(int i=0;s[i]!='\0';i++)
    {
        int n=int(s[i]);
        if(n>=65 && n<=90)
        {
            s1[i]=char(n+32);
            s2[i]=s[i];
        }
        else
        {
            s1[i]=s[i];
            s2[i]=char(n-32);
        }
    }
    cout<<s1<<"\n"<<s2;
    return 0;
}