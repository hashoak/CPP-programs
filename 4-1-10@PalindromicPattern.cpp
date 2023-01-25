#include<iostream>
using namespace std;

int main()
{
    cout<<"Type the number and press enter.\n";
    int n;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            cout<<"  ";
        }
        int k;
        for(k=i;k>0;k--)
        {
            cout<<k<<" ";
        }
        for(k=2;k<=i;k++)
        {
            cout<<k<<" ";
        }
        cout<<endl;
    }

    return 0;
}