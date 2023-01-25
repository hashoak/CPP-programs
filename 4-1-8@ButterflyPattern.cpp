#include<iostream>
using namespace std;

int main()
{
    cout<<"Type the width of the butterfly and press enter.\n";
    int n;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i<=n/2)
            {
                if(j<=i||j>n-i)
                {
                    cout<<"* ";
                }
                else
                {
                    cout<<"  ";
                }
            }
            else
            {
                if(j<=n-i+1||j>i-1)
                {
                    cout<<"* ";
                }
                else
                {
                    cout<<"  ";
                }
            }
        }
        cout<<endl;
    }

    return 0;
}