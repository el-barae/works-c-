#include <stdio.h>
#include <stdlib.h>

const int MAX_SIZE = 250;
char image[MAX_SIZE][MAX_SIZE+1];
int nbIterations,hauteur,largeur;
int main()
{
    scanf("%d%d%d", &nbIterations, &hauteur, &largeur);
    for (int ligne = 0; ligne < hauteur; ligne++)
        scanf("%s", image[ligne]);
    
    for (int ligne = 0; ligne < hauteur; ligne++)
        printf("%s\n", image[ligne]);
    return 0;
}