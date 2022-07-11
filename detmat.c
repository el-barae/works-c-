#include<stdio.h>
#include<math.h>
void mineur()
{
    int k,l;
    for(k=0;k<n-1;k++)
    {
        for(l=0;l<n;l++)
        {
            min[k][l]=mat[k][l+1];
        }
    }
}
int determinant(int m,int tab[][])
{

}
int main()
{
    int i,j,k,l,n,d=0;
    int mat[100][100];
    int min[100][100];
    int det[100][100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1;j++)
        {
            d=0;
            d=mat[i][j]*pow(-1, i+j)*determinant(n,min)+d;
        } 
    }
    printf("%d\n",d);
    return 0;
}