#include <iostream>
#include <string>
#include <cctype>
#include <iomanip>
using namespace std;

int main()
{
    int i,d;
    double t=0;
    double s=0;
    int tab[26];
    for(i=0;i<26;i++)
        tab[i]=0;
    string x;
    getline(cin,x);
    for(i=0;i<x.length();i++)
    {
        if(isalpha(x[i]))
        {
            t++;
            x[i]=tolower(x[i]);
            d=(x[i]-'a');
            tab[d]++;
        }
   }
   for(i=0;i<26;i++)
   {
      s=tab[i]/t;
      cout<<fixed;
      cout<<setprecision(6);
      cout<<s<<endl;
   }
   return 0;
}