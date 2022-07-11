#include<stdio.h>

int main()
{
    int i,j,n,m,p,k;
    int mat1[100][100];
    int mat2[100][100];
    int mat[100][100];
    scanf("%d",&n,&m,&p);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&mat1[i][j]);
            scanf("%d",&mat2[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<p;j++)
        {
             mat[i][j]=0;
            for(k=0;k<m;k++)
            {
                mat[i][j]=mat[i][j]+mat1[i][k]*mat2[k][j];
            }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d",mat[i][j]);
        }
    }
    return 0;
}