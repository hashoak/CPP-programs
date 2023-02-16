#include<iostream>
using namespace std;

int main(){
    cout<<"Type the no.of elements in the array and press enter.\n";
    int n;
    cin>>n;

    cout<<"Type the elements with spaces and press enter.\n";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int csum=0, sum, maxneg=0;
    for(int i=0;i<n;i++){
        if(arr[i-1]<0&&arr[i]<0){
            maxneg+=arr[i];
        }
        else if(arr[i]<maxneg){
            maxneg=arr[i];
        }
        csum+=arr[i];
    }
    sum=csum-maxneg;
    cout<<sum<<endl;
    return 0;
}