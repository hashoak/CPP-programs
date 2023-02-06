#include<iostream>
using namespace std;

int max(int a,int b)
{
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int min(int a,int b)
{
    if(a<b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main()
{
    cout<<"Type three numbers with spaces and press enter.\n";
    int a,b,c;
    cin>>a>>b>>c;

    cout<<"Maximum: "<<max(a,max(b,c))<<endl;
    cout<<"Minimum: "<<min(a,min(b,c))<<endl;
    return 0;
}