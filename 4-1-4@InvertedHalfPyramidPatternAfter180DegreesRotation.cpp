#include<iostream>
using namespace std;

int main()
{
    cout<<"Type the height of the pyramid and press enter.\n";
    int n;
    cin>>n;

    for(int i=n;i>0;i--)
    {
        for(int j=1;j<=n;j++)
        {
            if(j<i)
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