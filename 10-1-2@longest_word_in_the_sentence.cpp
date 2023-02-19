#include<iostream>
using namespace std;

int main(){
    char arr[INT16_MAX];
    cin.getline(arr,INT16_MAX);
    cin.ignore();

    int s=0,e=0,l=0,ml=0,as=0,ae=0;
    for(int i=0;i==0 || arr[i-1]!='\0';i++){
        if(arr[i]==' ' || arr[i]=='\0'){
            e=i-1;
            l=e-s;
            s=i+1;
        }

        if(l>ml){
            ml=l;
            as=e-l;
            ae=e;
        }
    }

    cout<<ml+1<<endl;
    for(int i=as;i<=ae;i++){
        cout<<arr[i];
    }
    cout<<endl;
    return 0;
}