#include<iostream>
using namespace std;
int main()
{
    int N,i,j;
    int tab[7];
    cin>>N;
    for(i=0;i<=7;i++)
    {
        tab[i]=0;
    }
    i=0;
    while(N!=0)
    {
        tab[i]=N%2;
        N=N/2;
        i++;
    }
    for(j=i-1;j>=0;j--)
    {
        cout<<tab[j];
    }
    return 0;
}