#include<iostream>
#include<string>
#include<cctype>

using namespace std;

int main()
{
    int i,j,t,c=0;
    string x,y;
    cin>>x;
    cin>>t;
    cin.ignore();
    for(i=0;i<t;i++)
    {
        getline(cin,y);
        c=0;
        for(j=0;j<y.length();j++)
        {
            if(j==0||isspace(y[j-1]))
            {
                if(tolower(y[j])==tolower(x[c])){
                    y[j]=x[c];
                    c++;                    
                }                    
                else
                    break;
            }
            else{
                y[j]=tolower(y[j]);
            }
        }
        if(c==x.length())
            cout<<y<<endl;
   }
   return 0;
}