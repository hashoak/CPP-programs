#include<iostream>
#include<math.h>
using namespace std;

int unique(int n,int a[])
{
    string s(32,'0');
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<32;j++)
        {
            if(a[i]&1<<j)
            {
                s[j]++;
            }
        }
    }
    int u=0;
    for(int i=0;i<32;i++)
    {
        if(s[i]%3)
        {
            u+=pow(2,i);
        }
    }
    return u;

}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<unique(n,a);
    return 0;
}