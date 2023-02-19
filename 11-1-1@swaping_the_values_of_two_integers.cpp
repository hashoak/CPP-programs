#include<iostream>
using namespace std;
void swap(int *a, int *b){
    int t=*a;
    *a=*b;
    *b=t;
    return;
}

int main(){
    int a,b;
    cin>>a;
    cin>>b;
    
    swap(&a,&b);
    cout<<"a="<<a<<",b="<<b<<endl;
}