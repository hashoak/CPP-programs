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

    int b=0;
    for(int i=0;i<n;i++){
        b=max(b,arr[i]);
    }

    if(b==0){
        cout<<1<<endl;
        return 0;
    }

    bool brr[b+1];
    for(int i=0;i<b+1;i++){
        brr[i]=0;
    }

    for(int i=0;i<n;i++){
        if(brr[arr[i]]==0){
            brr[arr[i]]=1;
        }
    }

    for(int i=0;i<b+1;i++){
        if(brr[i]==1&&brr[i+1]==0){
            cout<<i+1<<endl;
            return 0;
        }
    }
}