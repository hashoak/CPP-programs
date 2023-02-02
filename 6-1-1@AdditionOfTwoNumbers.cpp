#include<iostream>
using namespace std;

int add(int n1,int n2)
{
    return n1+n2;
}

void print(int n)
{
    cout<<n<<endl;
    return;
}

int main()
{
    cout<<"Type the numbers with spaces and press enter.\n";
    int a,b;
    cin>>a>>b;

    print(sum(a,b));
}