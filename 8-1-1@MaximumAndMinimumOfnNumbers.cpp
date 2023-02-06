#include<iostream>
using namespace std;

int max(int a, int b)
{
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int min(int a, int b)
{
    if(a<b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main()
{
    cout<<"Type the no.of numbers and press enter.\n";
    int n;
    cin>>n;

    cout<<"Type the numbers with spaces and press enter.\n";
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int ma=arr[0];
    int mi=arr[0];
    for(int i=1;i<n;i++)
    {
        ma=max(ma,arr[i]);
        mi=min(mi,arr[i]);
    }

    cout<<"Maximum: "<<ma<<endl<<"Minimum: "<<mi<<endl;
    return 0;
}