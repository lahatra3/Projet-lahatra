#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *memoireAllouee = NULL;
	memoireAllouee = malloc(sizeof(int));
	if(memoireAllouee == NULL)
	{
		exit(0);
	}
	printf("Veuillez entrer votre age:\n>>> ");
	scanf("%d", memoireAllouee);
	printf("\n\n");
	printf("Vous avez %d ans.\n Merci de votre participation !", *memoireAllouee);
	free(memoireAllouee);
	return 0;
}
