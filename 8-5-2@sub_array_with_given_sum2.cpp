#include<iostream>
using namespace std;

int main()
{
    cout<<"Type the size of the array and press enter.\n";
    int n;
    cin>>n;

    cout<<"Type the sum and press enter.\n";
    int sum;
    cin>>sum;

    cout<<"Type the numbers with spaces and press enter.\n";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int s=0;
    int e=0;
    int t=0;
    while(s<n && e<n){
        if(t+arr[e]<sum){
            t+=arr[e];
            e++;
        }
        else if(t+arr[e]>sum){
            t-=arr[s];
            s++;
        }
        else{
            cout<<"index "<<s<<" to "<<e<<endl;
            t-=arr[s];
            s++;
        }
    }
    return 0;
}