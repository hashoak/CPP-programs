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

    for(int i=0;i<n;i++){
        int s=0;
        for(int j=i;j<n;j++){
            s+=arr[j];
            cout<<s<<" ";
        }
    }
    return 0;
}
