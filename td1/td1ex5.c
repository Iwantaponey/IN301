#include <stdio.h> // on a besoin de la librairie standard pour appeler la fonction scanf et printf 

int main () // fonction principale du programme
{
	int i,check,nombre,div;
	printf("Veuillez entrer un nombre positif\n"); // on demande a l utilisateur d entrer un entier positif
	check=scanf("%i",&nombre); // cette variable compte le nombre d arguments correctement intégrés
	if(!check || nombre <0) // si l utilisateur n a pas entré un entier positif
	{
			printf("Vous n'avez pas entré un entier positif.\n Veuillez recommencer.");
			return 0; // le programme s arrete 
	}
	else 
	{
		div=0; // on initialise le nombre de diviseurs 
		for (i=2; i<(nombre/2)+1; i++) // on compte a partir de 2 jusqu a la moitié car tous les nombres sont divisibles par 1 et que si le nombre n est pas premier il aura forcément un diviseur entre 2 et sa moitié 
		{
				if (nombre%i==0) div=1; // quand on trouve un diviseur, on le compte
		}
		if (!div) printf("%i est premier",nombre); // affichage du résultat
		else printf("%i n'est pas premier",nombre);
	}
}
