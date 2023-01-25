#include<iostream>
using namespace std;

int main()
{
    cout<<"Type the width of the butterfly wing and press enter.\n";
    int n;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=2*n;j++)
        {
            if(j<=i||j>2*n-i)
            {
                cout<<"* ";
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<endl;
    }

    for(int i=n;i>0;i--)
    {
        for(int j=1;j<=2*n;j++)
        {
            if(j<=i||j>2*n-i)
            {
                cout<<"* ";
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<endl;
    }

    return 0;
}