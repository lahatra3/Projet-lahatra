#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int tableau[7] = {6, 9, 7, 8, 4, 1, 8}; 
    int i = 0, j = 0, valeurMinimal = tableau[0], valeurMaximal = tableau[0];
    int nouveauTableau[7] = {0}, item = 0, index = 0, newIndex = 0;

    for(i = 0; i < 7; i++)
    {
        if(valeurMinimal >= tableau[i])
        {
            valeurMinimal = tableau[i];
        }
    }

    for(j = 0; j < 7; j++)
    {
        if(valeurMaximal <= tableau[j])
        {
            valeurMaximal = tableau[j];
        }
    }
    for(item = valeurMinimal; item <= valeurMaximal; item++)
    {
        for(index = 0; index < 7; index++)
        {
            if(item == tableau[index])
            {
                nouveauTableau[newIndex] = item;
                newIndex++;
            }
        }
    }

    printf("\n\n");
    for(i = 0; i < 7; i++)
    {
        printf("%d\n", nouveauTableau[i]);
    }
    return 0; 
}