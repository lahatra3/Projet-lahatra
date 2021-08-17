#include<stdio.h>
#include<stdlib.h>
#include<math.h>

double moyenneTableau(int tableau[], int tailleTableau);

int main()
{
    int monTableau[4], i, valeur = 0, j;
    double moyenne, somme = 0;
    for(i = 0; i < 4; i++)
    {
        printf(">>> ");
        scanf("%d", &valeur);
        monTableau[i] = valeur;
    }
    for( j = 0; j < 4; j++)
    {
        somme = somme + monTableau[j];
    }
   printf("%f", moyenneTableau(monTableau, 4));
    return 0;
}

double moyenneTableau(int tableau[], int tailleTableau)
{
    int i;
    double moyenne = 0, somme = 0;
for(i = 0; i < tailleTableau; i++)
{
    somme += tableau[i];
}
moyenne = somme / 4;
return ("%f", moyenne);

}