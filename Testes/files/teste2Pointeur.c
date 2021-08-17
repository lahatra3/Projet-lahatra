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
	int nombre = 5;
	triplePointeur(&nombre);
	printf(">>> %d",nombre);
	printf("\n\n");

	printf("---------------------***-----------------");
}
