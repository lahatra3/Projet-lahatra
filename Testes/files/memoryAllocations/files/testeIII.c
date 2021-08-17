#include<stdio.h>
#include<stdlib.h>

int main()
{
    int nombreAmis = 0, i = 0;
    int *ageAmis = NULL;

    printf("\n");
    printf("Veuillez entre les nombres d'amis.\n---> ");
    scanf("%d", &nombreAmis);
    printf("\n");
    ageAmis = malloc(nombreAmis * sizeof(int));

    if(ageAmis == NULL)
    {
        exit(0);
    }

    for(i = 0; i < nombreAmis; i++)
    {
        printf("Veuillez entrer l'age de l'ami n° %d\n>>> ", i + 1);
        scanf("%d", &ageAmis[i]);
    }
    
    printf("\nVoici les âges enregistrés:\n");

    for(i = 0; i < nombreAmis; i++)
    {
        printf("%d\n", ageAmis[i]);
    }

    free(ageAmis);
    return 0;
}