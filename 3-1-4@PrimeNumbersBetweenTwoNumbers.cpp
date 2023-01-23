#include<iostream>
using namespace std;

int main()
{
    cout<<"Type the numbers with space in between.\n";
    int n;
    int m;
    cin>>n>>m;

    int i;
    int a;
    for(i=n+1;i<m;i++)
    {
        for(a=2;a<i;a++)
    {
        if(i%a==0)
        {
            break;
        }
    }
    if(a==i)
        {
            cout<<i<<" ";
        }
    }
    return 0;
}