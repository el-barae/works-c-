#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t1,t2,x,y,z,i,j;
    
    cin>>t1;
    int tab[t1];

    for ( i = 0; i < t1; i++)
    {
        cin>>x;
        tab[i]=x;
    }
    sort(tab,tab+t1);
    cin>>t2;
    int aff[t2];
    for ( i = 0; i < t2; i++)
    {
        cin>>y;
        for ( j = 0; j < t1; j++)
        {
            z=tab[i]-y;
            if(z<=0)
            {
                if(z=0)
                {
                    aff[i]=tab[i];
                    break;
                }
                else
                {
                    if(y-tab[i-1]<=z)
                        aff[i]=tab[i-1];
                    else
                        aff[i]=tab[i];
                    break;
                }
            }
        }
        
    }
    for ( i = 0; i < t2; i++)
    {
        cout<<aff[i];
    }
    
    return 0;   
}
