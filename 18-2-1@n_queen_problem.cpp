#include<iostream>
using namespace std;

bool safe(int n,int x,int y,int**s)
{
    for(int i=1;x-i>=0 && y-i>=0;i++)
    {
        if(s[x-i][y-i])
        {
            return 0;
        }
    }
    for(int i=1;x+i<n && y-i>=0;i++)
    {
        if(s[x+i][y-i])
        {
            return 0;
        }
    }
    for(int i=1;y-i>=0;i++)
    {
        if(s[x][y-i])
        {
            return 0;
        }
    }
    return 1;
}

bool nqueen(int n,int x,int y,int**s)
{
    if(y==n)
    {
        return 1;
    }
    for(int i=x;i<n;i++)
    {
        s[i][y]=1;
        if(safe(n,i,y,s)&&nqueen(n,0,y+1,s))
        {
            return 1;
        }
        s[i][y]=0;
    }
    return 0;
}

int main()
{
    int n;
    cin>>n;
    int **s=new int*[n];
    for(int i=0;i<n;i++)
    {
        s[i]=new int[n];
        for(int j=0;j<n;j++)
        {
            s[i][j]=0;
        }
    }

    if(nqueen(n,0,0,s))
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<s[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    else
    {
        cout<<"Not possible!";
    }
    return 0;
}