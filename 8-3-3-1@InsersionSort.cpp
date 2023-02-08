#include<iostream>
using namespace std;

int main()
{
    cout<<"Type the size of the array and press enter.\n";
    int n;
    cin>>n;

    cout<<"Type the numbers with spaces and press enter.\n";
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i=1;i<n;i++)
    {
        int c=arr[i];
        int j=i-1;
        while(arr[j]>c && j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=c;
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}