#include<iostream>
using namespace std;

int fact(int n)
{
    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact*=i;
    }
    return fact;
}

int comb(int n,int r)
{
    int comb;
    comb=fact(n)/(fact(r)*fact(n-r));
    return comb;
}

int main()
{
    cout<<"Type the height of the triangle.\n";
    int n;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        int j;
        for(j=1;j<=n-i;j++)
        {
            cout<<"  ";
        }

        for(j=1;j<=i;j++)
        {
            int a=comb(i-1,j-1);
            cout<<a;
            if(a<10)
            {
                cout<<"   ";
            }
            else if(a<100)
            {
                cout<<"  ";
            }
            else if(a<1000)
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}