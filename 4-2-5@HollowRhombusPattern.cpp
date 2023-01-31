#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i=n;i>0;i--)
    {
        int j;
        for(j=1;j<i;j++)
        {
            cout<<"  ";
        }
        for(j=1;j<=n;j++)
        {
            if(i==1||i==n||j==1||j==n)
            {
                cout<<"*  ";
            }
            else
            {
                cout<<"   ";
            }
        }
        cout<<endl;
    }
    return 0;
}