#include<iostream>
using namespace std;

int main()
{
    cout<<"Type the number till which you want.\n";
    int n;
    cin>>n;

    cout<<"Type the number by which the numbers shuold not be divisible.\n";
    int a;
    cin>>a;

    int i=0;
    do
    {
        i=i+1;
        if(i%a==0)
        {
            continue;
        }
        else
        {
            cout<<i<<" ";
        }
    }while(i<n);
    
    return 0;
}