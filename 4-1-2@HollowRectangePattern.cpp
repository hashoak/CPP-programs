#include<iostream>
using namespace std;

int main()
{
    cout<<"Type the height and length of the rectangle with spaces and press enter.\n";
    int a,b;
    cin>>a>>b;

    int i;
    int j;
    for(i=1;i<=a;++i)
    {
        for(j=1;j<=b;++j)
        {
            if(i==1||i==a||j==1||j==b)
            {
                cout<<"* ";
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<endl;
    }

    return 0;
}