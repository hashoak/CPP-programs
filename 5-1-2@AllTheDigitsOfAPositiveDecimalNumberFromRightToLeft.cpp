#include<iostream>
using namespace std;

int main()
{
    cout<<"Type the number and press enter.\n";
    int n;
    cin>>n;

    while(n>0)
    {
        cout<<n%10;
        n=n/10;
        if(n!=0)
        {
            cout<<",";
        }
    }
    cout<<endl;
    return 0;
}