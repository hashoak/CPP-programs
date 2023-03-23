#include<iostream>
using namespace std;

bool canbe(int n,int **m,int x,int y)
{
    if(x<n && y<n && m[x][y])
    {
        return 1;
    }
    return 0;
}

bool solmaze(int n,int **m,int x,int y,int **sm)
{
    if(x==n-1 && y==n-1)
    {
        sm[x][y]=1;
        return 1;
    }
    if(canbe(n,m,x,y))
    {
        sm[x][y]=1;
        if(solmaze(n,m,x+1,y,sm))
        {
            return 1;
        }
        if(solmaze(n,m,x,y+1,sm))
        {
            return 1;
        }
        sm[x][y]=0;
        return 0;
    }
    return 0;
}

int main()
{
    int n;
    cin>>n;
    int**m=new int*[n];
    for(int i=0;i<n;i++)
    {
        m[i]=new int[n];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>m[i][j];
        }
    }

    int**sm=new int*[n];
    for(int i=0;i<n;i++)
    {
        sm[i]=new int[n];
        for(int j=0;j<n;j++)
        {
            sm[i][j]=0;
        }
    }

    if(solmaze(n,m,0,0,sm))
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<sm[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    else
    {
        cout<<"No way out!";
    }
    return 0;
}