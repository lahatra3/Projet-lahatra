#include<stdio.h>  
#include<stdlib.h>
#define TAILLE_MAX 1000

int main()
{
    FILE* monfichier = NULL;
    char chaine[TAILLE_MAX] = "";
    monfichier = fopen("testeIII.txt", "r");
    if(monfichier != NULL)
    {
        fgets(chaine, TAILLE_MAX, monfichier);
        printf("%s", chaine);
        fclose(monfichier);
    }
    else
    {
        printf("No such file...");
    }
    return 0;
}