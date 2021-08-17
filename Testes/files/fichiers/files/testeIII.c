#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *save = NULL;
    int age = 0;
    save = fopen("testeIII.txt", "a");
    if(save != NULL)
    {
        printf("Bonjour !\nQuel age avez-vous?");
        printf("\n>>> ");
        scanf("%d", &age);
        fprintf(save, "Bonjour Fanantenana...\nElle a %d ans.\n", age);
        fclose(save);
    }
    else
    {
        printf("Error: can't open that file...");
    }
}