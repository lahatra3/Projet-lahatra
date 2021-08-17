#include<stdio.h>
#include<stdlib.h>
#define TAILLE_MAX 1024

int main()
{
    FILE* monfichier = NULL;
    char chaine[TAILLE_MAX] = "", nom[255] = "";
    int choix = 0; 
    monfichier = fopen("testeIII.txt", "r");
    if(monfichier != NULL)
    {
       while(fgets(chaine, TAILLE_MAX, monfichier) != NULL)
       {
           printf("%s", chaine);
       }
    }
    else
    {
        printf("No such file...");
    }
    return 0;
}