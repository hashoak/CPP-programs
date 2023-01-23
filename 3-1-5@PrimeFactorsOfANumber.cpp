#include<iostream>
using namespace std;

int main()
{
    cout<<"Type the number.\n";
    int n;
    cin>>n;

    int i,a,p=1,c=1;
    for(i=2;n!=1;i++)
    {
        for(a=i;a<i;a++)
        {
            if(i%a==0)
            {
                break;
            }
        }
        if(a==i)
        {
            if(n%i==0)
            {
                if(p==i)
                {
                    c++;
                }
                else
                {
                    cout<<p<<"^"<<c<<" x ";
                    p=i;
                    c=1;
                }
                n=n/i;
                i--;
            }
        }
    }
    if(n==1)
    {
        cout<<p<<"^"<<c;
    }
    return 0;
}