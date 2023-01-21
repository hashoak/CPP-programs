#include<iostream>
using namespace std;

int main()
{
    char c;
    
    cout<<"Type the alphabet and press enter\n";
    cin>>c;

    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='o'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
    {
        cout<<"The alphabet is a vowel\n";
    }
    else
    {
        cout<<"The alphabet is a consonant\n";
    }
    
    return 0;
}