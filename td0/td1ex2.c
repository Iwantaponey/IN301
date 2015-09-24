#include <stdio.h>

int main()
{
	printf("Veuillez entrer un nombre de secondes \n");
	int check,temps;
	check = scanf("%i", &temps);
	if ((check <1) || (temps<0)) 
	{
		printf("Vous n'avez pas entré un nombre entier positif ! \n Veuillez recommencer.\n");
		
		return 0; 
	}
	if ((check>0) || (temps>0))
	{
	
		int heure, min, sec;
		heure=temps/3600;
		min=(temps-3600*heure)/60;
		sec=temps-3600*heure-60*min;
		
		if (heure>1 && min>1 && sec>1)
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
		
		else
			{
				printf("%d seconde correspond à %d heure %d minute %d seconde" ,temps, heure, min, sec);
			}
		
		return 0;
	}
}
