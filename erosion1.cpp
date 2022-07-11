#include<iostream>
#include<string>
using namespace std;

int main()
{
    int i,j,n,l,c,k;
    cin>>n;
    cin>>l;
    cin>>c;
    string tmp;
    char tab[l][c];
    char res[l][c];
    for(i=0;i<l;i++)
    {
        cin>>tmp;
        for(j=0;j<c;j++)
        {
            tab[i][j]=tmp[j];
            res[i][j]='.';
        }
    }
    for(k=0;k<n;k++)
    {
        for(i=0;i<l;i++)
        {
            for(j=0;j<c;j++)
            {
                if(i>0 && i<l-1 && j>0 && j<c-1)
                {
                    if(tab[i+1][j]=='.' || tab[i][j+1]=='.' || tab[i-1][j]=='.' || tab[i][j-1]=='.')
                    {
                        res[i][j]='.';
                    }
                    else
                        res[i][j]=tab[i][j];
                }
                else
                    res[i][j]='.';
            }
        }
        for(i=0;i<l;i++)
        {
            for(j=0;j<c;j++)
            {
                tab[i][j]=res[i][j];
            }
        }
    }

    for(i=0;i<l;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<res[i][j];
        }
        cout<<endl;
    }
    return 0;
}