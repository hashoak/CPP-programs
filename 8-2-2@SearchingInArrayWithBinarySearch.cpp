#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int k)
{
    int s=0;
    int e=n-1;
    while(s<=e)
    {
        int m=(s+e)/2;
        if(k<arr[m])
        {
            e=m-1;
        }
        else if(k>arr[m])
        {
            s=m+1;
        }
        else
        {
            return m;
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

    cout<<binarySearch(arr,n,k)<<" index element"<<endl;
    return 0;
}