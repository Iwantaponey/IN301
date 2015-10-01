#include <stdio.h>

void affiche_resultat(int x, int y)
{
	printf("%i x %i \n",x,y); // affichage de la multiplication demandée
	int resultat=0,somme=0; // initialisation des valeurs utilisées
	while (x!=1) // boucle dont la condition d'arrêt est quand x=1
		{
			if (x%2==0) // instructions lorsque x est pair
			{
				x=x/2; y=2*y;	
			}
			else // instructions lorsque x est impair 
			{
				x=x-1; somme=y+somme;
			}
		
	printf ("= %i x %i + %i \n",x,y,somme); // affichage de la décomposition de la multiplication égyptienne
		
		}
	resultat=y+somme; // calcul du résultat
	printf ("= %i",resultat); // affichage du résultat 
}

int main () // fonction principale du programme
{
	printf("Veuillez entrer deux entiers positifs \n"); // affichage qui indique à l'utilisateur ce qu'il doit entrer
	
	int x,y,checkx,checky;
	
	checkx = scanf("%i",&x);
	checky = scanf("%i",&y);
	
	if (checkx<1 || checky<1 || x<1 || y<1 ) // test pour savoir si l'utilisateur a bien entré deux nombres entiers strictement positifs
		{
			printf("Vous n'avez pas entré deux entiers strictement positifs ! Veuillez recommencer\n"); 
			return 0; // le programme s'arrete si l'utilisateur n a pas entre d entiers strictement positifs
		}
	else // si l utlisateur a entré des nombres positifs, on calcule la multiplication égyptienne
	{
		affiche_resultat(x,y); // appel de la fonction affiche_resultat pour rendre le code lisible et ne pas surcharger le main
	}
	
	return 0; // fin du programme
}
