#include <stdio.h>
int main()
{

	printf("Veuillez entrer un nombre de secondes \n");
	int check,heure,minute,seconde,entree;
	check = scanf("%i", &entree);
	if ((check <1) || (entree<0)) 
	{
		printf("Vous n'avez pas entré un nombre entier positif ! \n Veuillez recommencer.\n");
		
		return 0; 
	}
	if ((check>0) || (entree>0))
	{
		if (entree<60) 
		{
			heure=0;
			minute=0;
			seconde=entree;
				if (seconde<2)
					{
						printf("%i secondes correspond à %i heure %i minute %i seconde ",entree, heure, minute, seconde);
					}
				else 
						printf("%i secondes correspond à %i heure %i minute %i secondes ",entree, heure, minute, seconde);
		}
		if (entree>=60 && entree<3600)
		{
			heure=0;
			minute= entree/60 ;
			seconde=(entree%60);
				if (minute<2 && seconde<2)
					{
						printf("%i secondes correspond à %i heure %i minute %i seconde ",entree, heure, minute, seconde);
					}
				if (minute>2 && seconde<2)
					{
							printf("%i secondes correspond à %i heure %i minutes %i seconde ",entree, heure, minute, seconde);
					}
				if (minute>2 && seconde>2)
					{
						printf("%i secondes correspond à %i heure %i minutes %i secondes ",entree, heure, minute, seconde);
					}
		}
		if (entree>=3600)
		{
			heure=entree/3600 ;
			minute = (entree-(entree/3600))/60 ;
			seconde = (entree%60);
		
				if (heure<2 && minute<2 && seconde<2)
					{
						printf("%i secondes correspond à %i heure %i minute %i seconde ",entree, heure, minute, seconde);
					}
				if (heure<2 && minute>2 && seconde<2)
					{
						printf("%i secondes correspond à %i heure %i minutes %i seconde ",entree, heure, minute, seconde);
					}
				if (heure<2 && minute>2 && seconde>2)
					{
						printf("%i secondes correspond à %i heure %i minutes %i secondes ",entree, heure, minute, seconde);
					}
				if (heure>2 && minute<2 && seconde<2)
					{
						printf("%i secondes correspond à %i heures %i minute %i seconde ",entree, heure, minute, seconde);
					}
				if (heure>2 && minute>2 && seconde<2)
					{
							printf("%i secondes correspond à %i heures %i minutes %i seconde ",entree, heure, minute, seconde);
					}
				if (heure>2 && minute>2 && seconde>2)
					{
						printf("%i secondes correspond à %i heures %i minutes %i secondes ",entree, heure, minute, seconde);
					}
		}
	}
	
	return 0;
}	
