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
    
    int cnegsum=0, negsum=INT32_MIN, sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        arr[i]=-arr[i];
        cnegsum+=arr[i];
        if(cnegsum<0){
            cnegsum=0;
        }
        negsum=max(cnegsum,negsum);
    }
    int ans=sum+negsum;
    cout<<ans<<endl;
    return 0;
}