#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void triplePointeur(int *);
void triplePointeur(int *pointeurSurNombre)
{
	*pointeurSurNombre *= 3;
}

int main()
{
	int nombre = 5, *pointeur = &nombre;
	triplePointeur(pointeur);
	printf(">>> %d", *pointeur);
	return 0;
}
