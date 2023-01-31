#include<iostream>
using namespace std;

int main()
{
    cout<<"Type the height of the triangle and press enter.\n";
    int n;
    cin>>n;

    for(int i=1;i<=n;++i)
    {
        int j;
        for(j=n-i;j>0;--j)
        {
            cout<<" ";
        }
        for(j=1;j<=i;++j)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}