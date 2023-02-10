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

    int csum=0;
    int sum=INT32_MIN;
    for(int i=0;i<n;i++){
        csum+=arr[i];
        if(csum<0){
            csum=0;
        }
        sum=max(csum,sum);
    }
    cout<<sum<<endl;
    return 0;
}