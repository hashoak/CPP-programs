#include<iostream>
using namespace std;

int main()
{
    cout<<"Type the height of the triangle and press enter.\n";
    int n;
    cin>>n;

    int coef=1;
    for(int i=0;i<n;++i)
    {
        int j;
        for(j=n-i-1;j>0;--j)
        {
            cout<<"  ";
        }
        for(j=0;j<=i;++j)
        {
            if(j==0||i==0)
            {
                coef=1;
            }
            else
            {
                coef=coef*(i-j+1)/j;
            }
            cout<<coef;
            if(coef<10)
            {
                cout<<"   ";
            }
            else if(coef<100)
            {
                cout<<"  ";
            }
            else if(coef<1000)
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}