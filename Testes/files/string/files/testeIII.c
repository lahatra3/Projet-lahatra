#include<stdio.h>
#include<stdlib.h>

int main()
{
    char prenom[100];
    printf("Veuillez entrer votre nom:\n>>> ");
    scanf("%s", prenom);
    printf("Bonjour Monsieur %s !", prenom);
    return 0;
}
