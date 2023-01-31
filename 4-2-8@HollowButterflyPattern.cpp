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
                if(j==1||j==i||j==n-i+1||j==n)
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
                if(j==1||j==n-i+1||j==i||j==n)
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