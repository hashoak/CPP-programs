#include<iostream>
using namespace std;

int main()
{
    // cout<<"Type the size of the array and press enter.\n";
    int n;
    cin>>n;

    // cout<<"Type the numbers with spaces and press enter.\n";
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i=n-1;i>0;i--)
    {
        for(int j=0;j<i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int t=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=t;
            }
        }
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}