#include<iostream>
using namespace std;

void unique(int n,int a[])
{
    int xs=0;
    for(int i=0;i<n;i++)
    {
        xs^=a[i];
    }
    int c=0;
    while(!(xs&1<<c))
    {
        c++;
    }
    int xs2=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]&1<<c)
        {
            xs2^=a[i];
        }
    }
    cout<<xs2<<" "<<(xs^xs2)<<"\n";
    return;
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    unique(n,a);
    return 0;
}