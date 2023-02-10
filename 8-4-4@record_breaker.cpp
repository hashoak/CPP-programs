#include<iostream>
using namespace std;

int main(){
    cout<<"Type the size of the array and press enter.\n";
    int n;
    cin>>n;

    cout<<"Type the numbers with spaces and press enter.\n";
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int g=0;
    int ans=0;
    for(int i=0;i<n-1;i++){
        if(arr[i]>g&&arr[i]>arr[i+1]){
            ans++;
            g=arr[i];
        }
    }
    if(arr[n-1]>g){
        ans++;
    }
    cout<<ans<<endl;
    return 0;
}