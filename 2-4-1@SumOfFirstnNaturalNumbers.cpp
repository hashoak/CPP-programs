#include<iostream>
using namespace std;

int main()
{
    int k=1;
    do
    {
        cout<<"Type the number and press enter.\n";
        int n;
        cin>>n;
        int sum=0;

        for(int counter=1;counter<=n;counter++)
        {
            sum=sum+counter;
        }

        cout<<"The sum of first "<<n<<" natural numbers is "<<sum<<".\n";
    }while(k=1);

    return 0;
}