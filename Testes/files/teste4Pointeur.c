#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void decoupeMinute(int *, int *);
void decoupeMinute(int *pointeurHeure, int *pointeurMinute)
{
	*pointeurHeure = *pointeurMinute / 60;
	*pointeurMinute = *pointeurMinute % 60;
}

int main()
{
	int heure = 0, minute = 90;

	decoupeMinute(&heure, &minute);

	printf(">>> il est  %d heure et %d minutes", heure, minute);

	return 0;
}

