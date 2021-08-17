 #include<stdio.h>
 #include<stdlib.h>
 #include<math.h>

 int sommeTableau(int tableau[], int tailleTableau);

 int main()
 {
	int tableau[4], i, valeur = 0;
	for(i = 0; i < 4; i++)
	{
		printf(">>> ");
		scanf("%d", &valeur);
		tableau[i] = valeur;
	}
	printf("%d",sommeTableau(tableau, 4));
	return 0;
 }
// This buttom is the function:
int sommeTableau(int tableau[], int tailleTableau)
{
	int i, somme = 0;
	for(i = 0; i < tailleTableau; i++)
	{
		somme += tableau[i];
	}
	return ("%d", somme);
}
