#include<iostream>
using namespace std;

int main(){
    cout<<"Type the no.of elements in the array and press enter.\n";
    int n;
    cin>>n;

    cout<<"Type the elements with spaces and press enter.\n";
    int arr[2*n];
    for(int i=0;i<2*n-1;i++){
        if(i<n){
            cin>>arr[i];
        }
        else{
            arr[i]=arr[i-n];
        }
    }

    int csum=0;
    int sum=INT32_MIN;
    int a;
    for(int i=0;i<a+n;i++){
        csum+=arr[i];
        if(csum<0){
            csum=0;
            a=i;
        }
        sum=max(csum,sum);
    }
    cout<<sum<<endl;
    return 0;
}