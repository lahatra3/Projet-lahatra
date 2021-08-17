#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void copie(int premierTableau[], int deuxiemeTableau[], int tailleTableau);

int main()
{
    int premierTableau[4] = {1, 2, 3, 4}, deuxiemeTableau[4];
    printf("\n");
    copie(premierTableau, deuxiemeTableau, 4);
    return 0;
}

void copie(int premierTableau[], int deuxiemeTableau[], int tailleTableau)
{
    int i = 0, j = 0;
    for(i = 0; i < tailleTableau; i++)
    {
        deuxiemeTableau[i] = premierTableau[i];
    }
 
    for(j = 0; j < tailleTableau; j++)
    {
        printf("%d\t", deuxiemeTableau[j]);
    }
}
