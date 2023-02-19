#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    cin>>s;

    for(int i=1;i<s.length();i++)
    {
        for(int j=0;j<s.length()-i;j++)
        {
            if(s[j]<s[j+1])
            {
                int t=s[j];
                s[j]=s[j+1];
                s[j+1]=t;
            }
        }
    }
    cout<<s;
}