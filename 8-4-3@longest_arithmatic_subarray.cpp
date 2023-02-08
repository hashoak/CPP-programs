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

    int pd=0;
    int cans=0;
    int ans=0;
    for(int i=1;i<n;i++){
        int cd=arr[i-1]-arr[i];
        if(pd==cd){
            cans++;
        }
        else{
            pd=cd;
            cans=2;
        }
        ans=max(ans,cans);
    }
    cout<<ans<<endl;
    return 0;
}