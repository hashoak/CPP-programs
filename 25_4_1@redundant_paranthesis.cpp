#include<bits/stdc++.h>
using namespace std;

void print(string e,stack<char> s)
{
    if(s.empty()) return;
    char x=s.top();
    s.pop();
    print(e,s);
    cout<<e[x];
    return;
}

bool redPar(string e)
{
    stack<char> s;
    int l=e.length();
    for(int i=0;i<l;i++)
    {
        if(e[i]==')')
        {
            if(e[s.top()]=='(') return 1;
            while(e[s.top()]!='(') s.pop();
            s.pop();
        }
        else s.push(i);
    }
    return 0;
}

int main()
{
    string e;
    cin>>e;
    cout<<redPar(e);
    return 0;
}