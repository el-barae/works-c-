#include<stdio.h>
#include<stdbool.h>  

bool border(int y,int z,int dy,int dz)
{
    if(y+dy<8 && z+dz<8 && y+dy>0 && z+dz>0)
    {
        return true;
    }
    return false;
}

int main()
{
    int i,j,k,x=0;
    char tab[8][8];
    char tmp;
    int directionX[8];
    int directionY[8];
    directionX[0]=2;
    directionY[0]=1;
    directionX[1]=2;
    directionY[1]=-1;
    directionX[2]=1;
    directionY[2]=2;
    directionX[3]=1;
    directionY[3]=-2;
    directionX[4]=-1;
    directionY[4]=2;
    directionX[5]=-1;
    directionY[5]=-2;
    directionX[6]=-2;
    directionY[6]=-1;
    directionX[7]=-2;
    directionY[7]=1;

    for ( i = 0; i < 8; i++)
    {
        for ( j = 0; j < 8; j++)
        {
            scanf("%c",&tab[i][j]);
        }
        scanf("%c",&tmp);
    }

    for ( i = 0; i < 8; i++)
    {
        for ( j = 0; j < 8; j++)
        {
            if(tab[i][j]=='C')
            {
                for(k=0;k<8;k++){
                    if(border(i,j,directionX[k],directionY[k]))
                    {
                        if(tab[i+directionX[k]][j+directionY[k]]>='a' && tab[i+directionX[k]][j+directionY[k]]<='z')
                        {
                            x++;
                        }
                    }
                }
            }
        }
        
    }
    if(x>0)
        printf("yes\n");
    else
        printf("no\n");
    
    return 0;
}