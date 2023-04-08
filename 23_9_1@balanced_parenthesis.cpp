#include<iostream>
#include<stack>
using namespace std;

bool balanced(string s)
{
    stack<char> st;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]==')' && st.top()=='(') st.pop();
        else if(s[i]==']' && st.top()=='[') st.pop();
        else if(s[i]=='}' && st.top()=='{') st.pop();
        else if(s[i]=='(' || s[i]=='[' || s[i]=='{') st.push(s[i]);
        else return 0;
    }
    return st.empty();
}

int main()
{
    string s;
    cin>>s;
    (balanced(s)) ? cout<<"Balanced\n":cout<<"Unbalanced\n";
    return 0;
}