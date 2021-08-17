#include<stdio.h>
#include<stdlib.h>
#define MON_NOM 7

int main()
{
    int nombre = MON_NOM;
    printf("%d", nombre);
    printf(">>> %s\n>>> %s", __FILE__, __TIME__);
    return 0;
}