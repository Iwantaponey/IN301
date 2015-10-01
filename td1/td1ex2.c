#include <stdio.h> // on a besoin de la librairie standard pour appeler printf et afficher du texte

int main() // fonction principale du programme
{
	printf("Veuillez entrer un nombre de secondes \n"); // affichage pour dire à l'utilisateur ce qu'il doit entrer
	int check,temps; 
	check = scanf("%i", &temps); // check est une variable qui sera nulle si l'utilisateur n'entre pas un entier 
	
	if ((check <1) || (temps<0)) // ici on vérifie si l'utilisateur a bien entré un nombre, donc check sera égale a 1 et si le nombre entré est positif, donc temps sera supérieur à 0
	{
		printf("Vous n'avez pas entré un nombre entier positif ! \n Veuillez recommencer.\n"); // on informe l'utilisateur qu'il n'a pas entré ce qu'il fallait pour lancer le programme
		return 0; // on arrête le programme
	}
	else
	{
		int heure, min, sec;
		heure=temps/3600; // Il y a 3600 secondes dans une heure donc il faut diviser temps par 3600 pour trouver le nombre d'heures.
		min=(temps-3600*heure)/60; // Le nombre de minutes est égal au temps moins le nombre de secondes qui forment des heures, divisé par 60 car il y a soixante secondes dans une minute
		sec=temps-3600*heure-60*min; // Le nombre de secondes est égal au temps moins le nombre de secondes qui forment des heures, moins le nombre de secondes qui forment des minutes
		
		if (heure>1 && min>1 && sec>1) // pour accorder l'affichage aux nombres trouvés, on teste les différents cas pour lesquels il faut mettre au pluriel
		{
			printf("%d secondes correspond à %d heures %d minutes %d secondes" ,temps, heure, min, sec);
		}
		
		else if (min>1 && sec>1)
			{
				printf("%d secondes correspond à %d heure %d minutes %d secondes" ,temps, heure, min, sec);
			}
		
		else if (sec>1)
			{
				printf("%d secondes correspond à %d heure %d minute %d secondes" ,temps, heure, min, sec);
			}
		
		else if (temps>1 && sec==1)
			{
				printf("%d secondes correspond à %d heure %d minute %d seconde" ,temps, heure, min, sec);
			}
		else
			{
				printf("%d secondes correspond à %d heure %d minute %d seconde" ,temps, heure, min, sec);
			}
		
		return 0; // on finit le programme
	}
}
