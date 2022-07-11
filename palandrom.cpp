#include<iostream>
#include<string>
#include <cctype>


using namespace std ;
 
int main()
{
    int t,i,j,l=0,k=0;
    string x;
    string y;
    cin>>t;
    cin.ignore();
    for(i=0;i<t;i++)
    {
        getline(cin,x);
        l=0;
        for(j=0;j<x.length();j++)
        {
            if(isalpha(x[j]))
            {
                y[l]=tolower(x[j]);
                l++;
            }
        }
        k=0;
        for(j=0;j<l/2;j++)
        {
            //cout<<"y[j] "<<y[j]<<" "<<y[l-j-1]<<endl;
            if(y[j]!=y[l-j-1])
                break;
            else
                k++;
        }
        //cout<<l<<" "<<k<<endl;    
        if(k==l/2)
            cout<<x<<endl;
    }
   return 0;
} 