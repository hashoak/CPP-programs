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

    int maxsum=INT32_MIN;
    for(int s=0;s<n;s++){
        for(int e=s;e<n;e++){
            int sum=0;
            for(int i=s;i<=e;i++){
                sum+=arr[i];
            }
            maxsum=max(maxsum,sum);
        }
    }
    cout<<maxsum<<endl;
    return 0;
}