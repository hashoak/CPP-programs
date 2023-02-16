#include<iostream>
using namespace std;

int main(){
    cout<<"Type the number of rows and columns respectively and press enter.\n";
    int n,m;
    cin>>n>>m;

    cout<<"Type the element that should be searched and press enter.\n";
    int k;
    cin>>k;

    int arr[n][m];
    cout<<"Type the elements of the 2-D array or the matrix and press enter.\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

    cout<<"Element found at: \n";
    int z=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==k){
                z++;
                cout<<z<<". Row "<<i+1<<" Column "<<j+1<<endl;
            }
        }
    }
    if(z==0){
        cout<<"Noooooooooooooooo!!!!!!! No elemnt found.\n";
    }
    return 0;
}