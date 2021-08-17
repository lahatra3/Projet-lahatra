#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void decoupeMinute(int *, int *);
int main()
{
    int heure = 0, minutes = 90;
    decoupeMinute(&heure, &minutes);
    printf("%d heures %d minutes", heure, minutes);
    return 0;
}

void decoupeMinute(int *heure, int *minutes)
{
    *heure = *minutes / 60;
    *minutes = *minutes % 60;
}