#include<iostream>
using namespace std;

int ascii(char ch)
{
    int n=int(ch);
    return n;
}

int main()
{
    cout<<"Type the character and press enter.\n";
    char ch;
    cin>>ch;

    int n=ascii(ch);
    if(n>64&&n<91||n>96&&n<123)
    {
        cout<<"It's an alphabet.\n";
    }
    else
    {
        cout<<"It's not an alphabet.\n";
    }
    return 0;
}