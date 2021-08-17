#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *save = NULL;
    save = fopen("testeI.txt", "a");
    if(save != NULL)
    {
        fputs("Hello, Mister Lahatra...\nHow are you ?", save);
        fclose(save);
    }
    else
    {
        printf("Impossible d'ouvrir le fichier...");
    }
    return 0;
}
