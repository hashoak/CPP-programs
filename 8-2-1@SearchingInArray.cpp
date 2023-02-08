#include<iostream>
using namespace std;

int index(int arr[], int n, int k)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(arr[i]==k)
        {
            return i;
        }
    }
    return -1;
}

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

    cout<<"Type the element to search.\n";
    int k;
    cin>>k;

    cout<<index(arr,n,k)<<" index element.\n";
    return 0;
}