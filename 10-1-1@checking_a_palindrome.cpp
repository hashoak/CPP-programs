#include<iostream>
using namespace std;

int main()
{
    char a[INT16_MAX];
    cin>>a;
    int n=0;
    while(a[n]!='\0')
    {
        n++;
    }

    for(int i=0;i<n/2;i++)
    {
        if(a[i]!=a[n-1-i])
        {
            cout<<"Not a palindrome.";
            return 0;
        }
    }
    cout<<"It's a palindrome.";
    return 0;
}