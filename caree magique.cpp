#include<iostream>
using namespace std;
int main()
{
    int n,i,j,x,d1=0,d2=0;
    cin>>n;
    int tab[n][n],l[n],c[n];
    for(i=0;i<n;i++)
    {
        l[i]=0;
        for(j=0;j<n;j++)
        {
            cin>>x;
            tab[i][j]=x;
            l[i]=x+l[i];
        }
        if(i!=0 && l[i]!=l[i-1])
            break;
       // cout<<l[i]<<endl;
    }
    for(i=0;i<n;i++)
    {
        c[i]=0;
        for(j=0;j<n;j++)
        {
            c[i]=tab[j][i]+c[i];
        }
        //cout<<c[i]<<endl;
        if(i!=0 && c[i]!=c[i-1])
            break;
    }
    for(i=0;i<n;i++)
    {
        d1=tab[i][i]+d1;
    }
    for(i=0;i<n;i++)
    {   
        d2=tab[i][n-i-1]+d2;
    }
    //cout<<d1<<" "<<d2<<endl;
    if(d1==d2&&d2==c[n-1]&&d1==l[n-1])
        cout<<"yes";
    else
        cout<<"no";
    return 0;
}