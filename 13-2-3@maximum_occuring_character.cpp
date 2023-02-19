#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    cin>>s;

    int a[26];
    for(int i=0;i<26;i++)
    {
        a[i]=0;
    }
    for(int i=0;s[i]!='\0';i++)
    {
        a[int(s[i])-'a']++;
    }
    int ans=0,n;
    for(int i=0;i<26;i++)
    {
        cout<<a[i]<<" ";
        if(a[i]>ans)
        {
            ans=a[i];
            n=i;
        }
    }
    cout<<endl;
    cout<<char(n+'a')<<" "<<ans<<" times\n";
    return 0;
}