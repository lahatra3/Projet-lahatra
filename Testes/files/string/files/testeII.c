#include<stdio.h>
#include<stdlib.h>

int main()
{
    char nom[8], prenom[7];

    char caractere;
    int i = 0;
    nom[0] = 'l';
    nom[1] = 'a';
    nom[2] = 'h';
    nom[3] = 'a'; 
    nom[4] = 't';
    nom[5] = 'r';
    nom[6] = 'a';
    nom[7] = '\0';

    printf("%s\n", nom);

    for(i = 0; i < 7; i++)
    {
        printf(">>> ");
        scanf("%s", &caractere);
        prenom[i] = caractere;
    }

    printf("%s", prenom);
    return 0;
}