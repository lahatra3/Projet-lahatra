#include<stdio.h>
#include<stdlib.h>

struct Personnes 
{
    char nom[100], prenom[100];
    int age;
};

int main()
{
    struct Personnes information[3] = {0};
    int i = 0;

    printf(">>> Nom:\n--->");
    scanf("%s", information[0].nom);
    printf("%s", information);
    return 0;
}