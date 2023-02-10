#include<iostream>
using namespace std;

int main()
{
    cout<<"Type the size of the array and press enter.\n";
    int n;
    cin>>n;

    cout<<"Type the sum and press enter.\n";
    int sum;
    cin>>sum;

    cout<<"Type the numbers with spaces and press enter.\n";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        int s=0;
        for(int j=i;j<n;j++){
            s+=arr[j];
            if(s==sum){
                cout<<i+1<<" "<<j+1<<endl;
            }
            else if(s>sum){
                break;
            }
        }
    }
    return 0;
}