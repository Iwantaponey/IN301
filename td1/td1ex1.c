#include <stdio.h> // on a besoin d'utiliser la librairie standard pour appeler la fonction printf et afficher du texte
int main () // fonction du programme
{
	int i,j; 
	for (i=0; i<10; i++) // boucle qui fait 10 itérations
	{
		for (j=10; j>i ; j--) // boucle qui fait 9 itérations
		{ 
			printf (" "); // affichage d'un espace 
		}
		printf ("*\n"); // affichage d'une étoile puis retour à la ligne
	}
	
	return 0; // fin du programme 
}
