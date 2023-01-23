#include<iostream>
using namespace std;

int main()
{
    cout<<"Type the number.\n";
    int n;
    cin>>n;

    int i;
    int a;
    for(i=2;i<n;i++)
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