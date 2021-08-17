#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	int age, *monPointeur = NULL;
	age = 10;
	monPointeur = &age;
	printf(">>> %d\n>>> %d", age, monPointeur);
}
