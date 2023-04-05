#include<bits/stdc++.h>
#include<stack>
using namespace std;

int prefixEval(string s)
{
    stack<int> st;
    int i,x,op1,op2;
    for(i=s.length()-1;i>=0;i--)
    {
        x=int(s[i]-'0');
        if(x>=0 && x<=9) st.push(x);
        else
        {
            op1=st.top();
            st.pop();
            op2=st.top();
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
    cout<<prefixEval(s)<<"\n";
    return 0;
}