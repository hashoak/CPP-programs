#include<bits/stdc++.h>
#include<stack>
using namespace std;

int postfixEval(string s)
{
    stack<int> st;
    int i,op1,op2;
    for(i=0;i<s.length();i++)
    {
        if(s[i]>='0' && s[i]<='9') st.push(s[i]-'0');
        else
        {
            op2=st.top();
            st.pop();
            op1=st.top();
            st.pop();
            if(s[i]=='+') st.push(op1+op2);
            else if(s[i]=='-') st.push(op1-op2);
            else if(s[i]=='*') st.push(op1*op2);
            else if(s[i]=='/') st.push(op1/op2);
            else if(s[i]=='^') st.push(pow(op1,op2));
        }
    }
    return st.top();
}

int main()
{
    string s;
    cin>>s;
    cout<<postfixEval(s)<<"\n";
    return 0;
}