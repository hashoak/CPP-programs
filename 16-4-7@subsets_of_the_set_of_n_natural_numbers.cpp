#include<iostream>
using namespace std;

void subsets(int n,string a)
{
    if(n==0)
    {
        cout<<"\""<<a<<"\"\n";
        return;
    }
    subsets(n-1,a);
    subsets(n-1,to_string(n)+a);
}

int main()
{
    int n;
    cin>>n;
    subsets(n,"");
    return 0;
}