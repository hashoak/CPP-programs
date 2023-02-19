#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string s;
    cin>>s;
    transform(s.begin(),s.end(),s.begin(),::tolower);
    cout<<s<<"\n";
    transform(s.begin(),s.end(),s.begin(),::toupper);
    cout<<s;
    return 0;
}