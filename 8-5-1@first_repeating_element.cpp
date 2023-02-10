#include<iostream>
using namespace std;

int main(){
    cout<<"Type the size of the array and press enter.\n";
    int n;
    cin>>n;

    cout<<"Type the numbers with spaces and press enter.\n";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int a=INT32_MIN;
    for(int i=0;i<n;i++){
        a=max(a,arr[i]);
    }

    int brr[a+1];
    for(int i=0;i<=a;i++){
        brr[i]=-1;
    }

    int mini=INT32_MAX;
    for(int i=0;i<n;i++){
        if(brr[arr[i]]!=-1){
            mini=min(mini,brr[arr[i]]);
        }
        brr[arr[i]]=i;
    }

    if(mini>n-1){
        cout<<"No repetion.\n";
    }
    else{
        cout<<"element "<<mini+1<<endl;
    }
    return 0;
}