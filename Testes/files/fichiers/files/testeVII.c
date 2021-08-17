#include<stdio.h>
#include<stdlib.h>

struct coordonnees
{
    int x, y;
};
int main()
{
    printf("char %d octets\n", sizeof(char));
    printf("int %d octets\n", sizeof(int));
    printf("double %d octets\n", sizeof(double));
    printf("float %d octets\n", sizeof(float));
    printf("long %d octets\n", sizeof(long));
    printf("Ma propre variable %d octets", sizeof(struct coordonnees));
    return 0;
}