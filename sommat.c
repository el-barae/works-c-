#include<stdio.h>

int main()
{
    int m,i,j,k;
    scanf("%d\n",&m);
    int mat[1000][1000];
    int res[1000][1000];
    for(i=0;i<m;i++)
    {
        for ( j = 0; j < m; j++)
        {
            scanf("%d",&mat[i][j]);
            res[i][j]=0;
        }
    }
    //printf("end input\n");
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < m; j++)
        {
            for( k=0;k<m;k++)
            {
                res[i][j]+=mat[i][k]*mat[k][j];
            }      
        }
    }
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < m; j++)
        {
            printf("%d\t",res[i][j]);
        }
        printf("\n");
        
    }
    
    return 0;
}