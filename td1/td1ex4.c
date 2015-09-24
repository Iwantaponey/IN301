#include <stdio.h>

int calcul(int p)
{
	int lim;
	
	return lim;
}

int main ()
{
	int p,check,lim;
	printf("Veuillez entrer une constante de précision (un entier positif) . \n");
	check = scanf("%i",&p);
	if (check<1)
		{
			printf("Vous n'avez pas entré d'entier positif ! Veuillez recommencer\n");
			return 0;
		}
	else
	{
		lim=calcul(p);
		printf("La limite de la suite est %i",lim);
	}
	
	return 0;
}
