#include<iostream>
using namespace std;

int main()
{
    cout<<"Type the height of the diamond and press enter.\n";
    int n;
    cin>>n;

    for(int i=1;i<=n;++i)
    {
        for(int j=n-i;j>0;--j)
        {
            cout<<" ";
        }
        for(int k=i;k>0;--k)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=n-1;i>0;--i)
    {
        for(int j=n-i;j>0;--j)
        {
            cout<<" ";
        }
        for(int k=i;k>0;--k)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}