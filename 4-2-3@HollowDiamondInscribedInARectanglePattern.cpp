#include<iostream>
using namespace std;

int main()
{
    cout<<"Type the length of the rectangle and press enter.\n";
    int l;
    cin>>l;

    int n=(l+1)/2;

    for(int i=n;i>0;i--)
    {
        for(int j=1;j<=l;j++)
        {
            if(j>i&&j<=l-i)
            {
                cout<<"  ";
            }
            else
            {
                cout<<"* ";
            }
        }
        cout<<endl;
    }
    for(int i=2;i<=n;i++)
    {
        for(int j=1;j<=l;j++)
        {
            if(j>i&&j<=l-i)
            {
                cout<<"  ";
            }
            else
            {
                cout<<"* ";
            }
        }
        cout<<endl;
    }
    
    return 0;
}