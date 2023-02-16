#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin>>n>>m;
    
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    
    int rs=0, re=n-1, cs=0, ce=m-1, z=0;
    while(z<n*m){
        for(int i=cs; i<=ce && z<n*m; i++){
            cout<<arr[rs][i]<<" ";
            z++;
        }
        rs++;
        for(int i=rs; i<=re && z<n*m; i++){
            cout<<arr[i][ce]<<" ";
            z++;
        }
        ce--;
        for(int i=ce; i>=cs && z<n*m; i--){
            cout<<arr[re][i]<<" ";
            z++;
        }
        re--;
        for(int i=re; i>=rs && z<n*m; i--){
            cout<<arr[i][cs]<<" ";
            z++;
        }
        cs++;
    }
    return 0;
}