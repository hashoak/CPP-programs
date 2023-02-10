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

    int s=0;
    int e=0;
    int maxsum=INT32_MIN;
    int sum=0;
    while(s<n&&e<n){
        sum+=arr[e];
        maxsum=max(maxsum,sum);
        if(e==n-1){
            s++;
            e=s;
            sum=0;
        }
        else{
            e++;
        }
    }
    cout<<maxsum<<endl;
    return 0;
}