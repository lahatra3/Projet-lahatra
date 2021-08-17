#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *memoireAllouee = NULL;
	memoireAllouee = malloc(sizeof(double));
	if(memoireAllouee == NULL)
	{
		exit(0);
	}

	printf("Lahatra");
	free(memoireAllouee);
	return 0;
}
