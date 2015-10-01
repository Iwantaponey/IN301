#include <stdio.h>

int main ()
{
	int i,check,nombre,div;
	printf("Veuillez entrer un nombre positif\n");
	check=scanf("%i",&nombre);
	if(!check) 
	{
			printf("Vous n'avez pas entré un entier positif.\n Veuillez recommencer.");
			return 0;
	}
	else
	{
		div=0;
		for (i=2; i<(nombre/2)+1; i++)
		{
				if (nombre%i==0) div=1; 
		}
		if (!div) printf("%i est premier",nombre);
		else printf("%i n'est pas premier",nombre);
	}
}
