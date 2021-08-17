#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	int i = 0;
	char lettre, mot[7];
	for(i = 0; i < 7; i++)
	{
	printf(">>>");
	scanf("%c", &lettre);
	mot[i] = lettre;
	printf("%d", i);
	}
	return 0;
}
