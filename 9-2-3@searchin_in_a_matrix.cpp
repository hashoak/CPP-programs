#include<iostream>
using namespace std;

int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    int a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    
    int pn=0,pm=m-1,t=0;
    while(pn!=n-1 || pm!=0)
    {
        if(a[pn][pm]<k)
        {
            pn++;
        }
        else if(a[pn][pm]>k)
        {
            pm--;
        }
        else
        {
            if(t==0)
            {
                cout<<"Element found at:\n";
            }
            cout<<"Row: "<<pn+1<<", Column: "<<pm+1<<"\n";
            pn++;
        }
    }
}