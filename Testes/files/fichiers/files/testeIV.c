#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE* save = NULL;
    save = fopen("testeIII.txt", "r");
    int caractereActuel = 0;
    if(save != NULL)
    {
        do
        {
            caractereActuel = fgetc(save);
            printf("%c", caractereActuel);
        }while(caractereActuel != EOF);
        fclose(save);
    }
    else
    {
        printf("ERROR: Can't open this file...");
    }
    return 0;
}