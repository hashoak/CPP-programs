#include<iostream>
using namespace std;

int main()
{
    cout<<"Type the length of the rhombus.\n";
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
            cout<<"*  ";
        }
        cout<<endl;
    }
    return 0;
}