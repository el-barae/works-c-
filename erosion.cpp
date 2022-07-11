#include<iostream>
#include<string>
using namespace std;
int tab[250][250];
void coordonnees(int h, int d)
{
    tab[h-1][d]='#';
    tab[h][d-1]='#';
    tab[h+1][d]='#';
    tab[h][d+1]='#';
}
void cadre(int m, int v)
{
    for(int k=0;k<v;k++)
    {
        tab[0][k]='.';
    }
    for(int k=0;k<m;k++)
    {
        tab[k][0]='.';
    }
    for(int k=0;k<v;k++)
    {
        tab[m][k]='.';
    }
    for(int k=0;k<m;k++)
    {
        tab[k][v]='.';
    }
}
int main()
{
    int n,l,c,i;
    char x;
    cin>>n>>l>>c;
    string tab[l][c];
    for(int i=0;i<l;i++)
    {
        for(int j=0;j<c;j++)
        {

            cin>>x;
            tab[i][j]=x;
        }
    }
    cadre(l,c);
    for(i=0;i<n;i++)
    {
        for(int i=0;i<l;i++)
        {   
            for(int j=0;j<c;j++)
            {
                coordonnees(i,j);
            }
        }
    }
    for(int i=0;i<l;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<tab[i][j];
        }
    }

    return 0;
}