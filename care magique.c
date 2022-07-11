#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    
    int n, Cst_magique ;
    int **M, **PM, *Pi ;

    printf("\nSaisir l'ordre de carre Magique: ") ;
    scanf("%d", &n) ;

    // ****** Allocation dynamique ******
    M = (int**)malloc(n*sizeof(int*)) ;
    for ( PM = M; PM < M + n; PM++)
        *PM = (int*)malloc(n*sizeof(int)) ;

    // ****** Saisir les elements de de carre magique ******
    printf("\n") ;

    for ( PM = M; PM < M + n; PM++)
    {
        for ( Pi = *PM; Pi < *PM + n; Pi++)
        {
            do
            {
                printf("Entrez l'element M[%ld][%ld] : ", PM-M+1, Pi-*PM+1) ;
                scanf("%d", Pi) ;
                
            } while (*Pi <= 0);
        }
        
    }

    // Affichage:
    printf("\n") ;
    for ( PM = M; PM < M + n; PM++)
    {
        for ( Pi = *PM; Pi < *PM + n; Pi++)
           printf("\t%d", *Pi) ;
        
        printf("\n") ;
    }

    Cst_magique = (n * (n*n+1) / 2) ;

    // verifions la somme des entiers sur chaque ligne
    int S ;
    for ( PM = M; PM < M + n; PM++)
    {
        S = 0 ;
        for ( Pi = *PM; Pi < *PM + n; Pi++)
            S = S + *Pi ;
        
        if (S != Cst_magique){
            printf("\nce carre n'est pas magique") ;
            exit(0) ;
        }
    }

    // verifions la somme des entiers sur chaque colonne
    int x = 0 ;
    while (x == (n-1))
    {   
        S = 0 ;
        for ( PM = M; PM < M + n; PM++)
        { 
            Pi = *PM ;
            S = S + *(Pi + x) ;
        }
    
        if (S != Cst_magique){
            printf("\nce carre n'est pas magique") ;
            exit(0) ;
        }
            
        x++ ;
    }
    
    // verifions la somme des entiers sur chaque diagonale
    S = 0 ;
    for ( PM = M; PM < M + n; PM++)
    { 
        Pi = *PM ;
        S = S + *(Pi + (PM-M)) ;
    }
    if (S != Cst_magique){
        printf("\nce carre n'est pas magique") ;
        exit(0) ;
    }
            
    S = 0 ;
    for ( PM = M + (n-1); PM >= M ; PM--)
    { 
        Pi = *PM ;
        S = S + *(Pi + ((M + (n-1)) - PM ) ) ;
    }
    if (S != Cst_magique){
        printf("\nce carre n'est pas magique") ;
        exit(0) ;
    }
    
    printf("\nLe carre est bien magique") ;

    return 0 ;
}