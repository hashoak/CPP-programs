#include<bits/stdc++.h>
#include<stack>
using namespace std;

int prec(char c)
{
    if(c=='^') return 3;
    if(c=='*' || c=='/') return 2;
    if(c=='+' || c=='-') return 1;
    else return 0;
}

string inToPost(string s)
{
    string po="";
    stack<char> st;
    for(int i=0;i<s.length();i++)
    {
        if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') || (s[i]>='0' && s[i]<='9')) po+=s[i];
        else if(s[i]=='(') st.push(s[i]);
        else if(s[i]==')')
        {
            while(st.top()!='(')
            {
                po+=st.top();
                st.pop();
            }
            st.pop();
        }
        else
        {
            while(!st.empty() && prec(s[i])<prec(st.top()))
            {
                po+=st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while(!st.empty())
    {
        po+=st.top();
        st.pop();
    }
    return po;
}

int main()
{
    string s;
    cin>>s;
    cout<<inToPost(s)<<"\n";
    return 0;
}