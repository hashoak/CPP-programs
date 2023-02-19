#include<iostream>
using namespace std;

int getBit(int n,int i)
{
    return ((n&1<<i)!=0);
}

int setBit(int n,int i)
{
    return (n|1<<i);
}

int clearBit(int n,int i)
{
    return (n&~(1<<i));
}

int toggleBit(int n,int i)
{
    return (n^1<<i);
}

int updateBit(int n,int i,int bit)
{
    return ((n&~(1<<i))|bit<<i);
}

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    char o;
    cout<<"Enter \"g\" for getBit, \"s\" for setBit, \"c\" for clearBit, \"t\" for toggleBit, \"u\" for updateBit: ";
    cin>>o;
    int i;
    switch (o)
    {
    case 'g':
        cout<<"Enter the index of the bit you want to get: ";
        cin>>i;
        cout<<getBit(n,i);
        break;

    case 's':
        cout<<"Enter the index of the bit you want to change: ";
        cin>>i;
        cout<<setBit(n,i);
        break;

    case 'c':
        cout<<"Enter the index of the bit you want to clear: ";
        cin>>i;
        cout<<clearBit(n,i);
        break;

    case 't':
        cout<<"Enter the index of the bit you want to toggle: ";
        cin>>i;
        cout<<toggleBit(n,i);
        break;

    case 'u':
        cout<<"Enter the index of the bit you want to update: ";
        cin>>i;
        int b;
        cout<<"Enter the updated bit: ";
        cin>>b;
        cout<<updateBit(n,i,b);
        break;
        
    default:
        cout<<"Invalid command. \n";
        break;
    }
    return 0;
}