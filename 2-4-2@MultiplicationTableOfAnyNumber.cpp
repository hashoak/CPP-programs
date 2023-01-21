#include<iostream>
using namespace std;

int main()
{
    int k=1;
    do
    {
        cout<<"Type the number of the table which you want.\n ";
        int a;
        cin>>a;

        cout<<"Type the number till which multiple you want.\n";
        int b;
        cin>>b;

        for(int i=0;i<=b;i++)
        {
            cout<<a<<" x "<<i<<" = "<<a*i<<endl;
        }

    }while(k=1);

    return 0;
}