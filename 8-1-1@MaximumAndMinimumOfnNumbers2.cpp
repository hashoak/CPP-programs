#include<iostream>
using namespace std;

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

    int max=arr[0];
    int min=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }

    cout<<"Maximum: "<<max<<endl<<"Minimum: "<<min<<endl;
    return 0;
}