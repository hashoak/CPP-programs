#include<iostream>
using namespace std;

int main()
{
    cout<<"Type the length of the pattern and press enter.\n";
    int n;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        int a=1;
        for(int j=1;j<=i;j++)
        {
           if(i%2!=0)
           {
                cout<<a<<" ";
           }
           else
           {
               cout<<!(a)<<" ";
           }
           a=!(a);
        }
        cout<<endl;
    }

    return 0;
}