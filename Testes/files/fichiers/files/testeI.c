#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE* monFichier = NULL;
	monFichier = fopen("teste.txt", "w");
	if(monFichier != NULL)
	{
		fputc('F', monFichier);
		fclose(monFichier);
	}
	else 
	{
		printf("impossible d'ouvrir le fichier...!");
	}
	return 0;
}
