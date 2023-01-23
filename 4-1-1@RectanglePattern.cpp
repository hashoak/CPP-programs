#include<iostream>
using namespace std;

int main()
{
    cout<<"Type the height and length of the rectangle with spaces and press enter.\n";
    int a,b;
    cin>>a>>b;

    int k=1;
    do
    {
        int i=1;
        do
        {
            cout<<"* ";
            ++i;
        }while(i<=a);
        cout<<endl;
        ++k;
    }while(k<=b);
    
    return 0;
}