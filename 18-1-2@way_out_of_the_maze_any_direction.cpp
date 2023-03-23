#include<iostream>
using namespace std;

bool canbe(int n,char **m,int x,int y)
{
    if(x<=n && y<=n && m[x][y]=='.')
    {
        return 1;
    }
    return 0;
}

bool solmaze(int n,char **m,int x,int y,char **sm,char c)
{
    if(m[x][y]=='x')
    {
        sm[x][y]='*';
        return 1;
    }
    if(canbe(n,m,x,y))
    {
        sm[x][y]='.';
        switch (c)
        {
            case 'u':
                if(solmaze(n,m,x+1,y,sm,'u'))
                {
                    return 1;
                }
                if(solmaze(n,m,x,y+1,sm,'l'))
                {
                    return 1;
                }
                if(solmaze(n,m,x,y-1,sm,'r'))
                {
                    return 1;
                }
                break;
            case 'l':
                if(solmaze(n,m,x,y+1,sm,'l'))
                {
                    return 1;
                }
                if(solmaze(n,m,x+1,y,sm,'u'))
                {
                    return 1;
                }
                if(solmaze(n,m,x-1,y,sm,'d'))
                {
                    return 1;
                }
                break;
            case 'd':
                if(solmaze(n,m,x,y+1,sm,'l'))
                {
                    return 1;
                }
                if(solmaze(n,m,x-1,y,sm,'d'))
                {
                    return 1;
                }
                if(solmaze(n,m,x,y-1,sm,'r'))
                {
                    return 1;
                }
                break;
            case 'r':
                if(solmaze(n,m,x+1,y,sm,'u'))
                {
                    return 1;
                }
                if(solmaze(n,m,x,y-1,sm,'r'))
                {
                    return 1;
                }
                if(solmaze(n,m,x-1,y,sm,'d'))
                {
                    return 1;
                }
                break;
            default:
                break;
        }
        sm[x][y]='X';
        return 0;
    }
    return 0;
}

int main()
{
    int n;
    cin>>n;
    char**m=new char*[n+2];
    for(int i=0;i<=n+1;i++)
    {
        m[i]=new char[n+2];
        for(int j=0;j<=n+1;j++)
        {
            if(i==0||i==n+1||j==0||j==n+1)
            {
                m[i][j]='0';
            }
            else
            {
                cin>>m[i][j];
            }
        }
    }

    char**sm=new char*[n+2];
    for(int i=0;i<=n+1;i++)
    {
        sm[i]=new char[n+2];
        for(int j=0;j<=n+1;j++)
        {
            sm[i][j]='X';
        }
    }
    char c='u';

    if(solmaze(n,m,1,1,sm,c))
    {
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
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