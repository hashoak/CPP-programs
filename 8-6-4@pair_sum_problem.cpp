#include<iostream>
using namespace std;

int main(){
    cout<<"Type the no.of elements in the array and press enter.\n";
    int n;
    cin>>n;

    cout<<"Type the sum and press enter.\n";
    int sum;
    cin>>sum;

    cout<<"Type the elements with spaces and press enter.\n";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int s=0, e=n-1;
    while(s!=e){
        int ans=arr[s]+arr[e];
        if(ans<sum){
            s++;
        }
        else if(ans>sum){
            e--;
        }
        else{
            cout<<s<<" "<<e<<endl;
            return 0;
        }
    }
    cout<<"No such pairs.\n";
    return 0;
}