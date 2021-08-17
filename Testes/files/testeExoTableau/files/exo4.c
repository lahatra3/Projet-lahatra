#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void maximumTableau(int tableau[], int tailleTableau, int valeurMax);

int main()
{
    int tableau[4]  = {7, 8, 5, 10};
    maximumTableau(tableau, 4, 5);
    return 0;
}

void maximumTableau(int tableau[], int tailleTableau, int valeurMax)
{
    int i = 0, j = 0;
    for(i = 0; i < tailleTableau; i++)
    {
        if(tableau[i] > valeurMax)
        {
            tableau[i] = 0;
        }
    }
    for(j = 0; j < tailleTableau; j++)
    {
        printf("%d\n", tableau[j]);
    }
}