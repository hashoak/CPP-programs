#include<iostream>
using namespace std;

int main()
{
    cout<<"Type the number and press enter.\n";
    int n;
    cin>>n;
    int a=0,b=1;

    if(n==1)
    {
        cout<<"0";
    }
    else
    {
        cout<<"0,1";
        for(int i=1;i<=n-2;i++)
        {
            cout<<",";
            int c=a+b;
            cout<<c;
            a=b;b=c;
        }
    }
    cout<<endl;
    return 0;
}