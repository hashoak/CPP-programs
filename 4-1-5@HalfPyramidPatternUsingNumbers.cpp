#include<iostream>
using namespace std;

int main()
{
    cout<<"Type the height of the pyramid and press enter.\n";
    int n;
    cin>>n;

    for(int i=1;i<=n;++i)
    {
        for(int j=1;j<=i;++j)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }

    return 0;
}