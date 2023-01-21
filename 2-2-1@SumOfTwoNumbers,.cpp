#include<iostream>
using namespace std;

int main()
{
    cout<< "Type the first number and press enter"<< endl;
    int number1;
    cin>>number1;

    cout<< "Enter the second number and press enter"<< endl;
    int number2;
    cin>>number2;

    int sum=number1+number2;
    cout<<"Sum of the numbers is " << sum<< endl;

    return 0;
}