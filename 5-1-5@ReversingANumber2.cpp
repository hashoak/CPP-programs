#include<iostream>
using namespace std;

int main()
{
    cout<<"Type the number.\n";
    int n;
    cin>>n;

    int rn=0;
    while(n>0)
    {
        rn=rn*10+n%10;
        n=n/10;
    }
    cout<<rn<<endl;
    return 0;
}