#include <stdio.h>

void affiche_resultat(int x, int y)
{
	printf("%i x %i \n",x,y);
	int resultat=0,somme=0;
	while (x!=1)
		{
			if (x%2==0)
			{
				x=x/2; y=2*y;	
			}
			else
			{
				x=x-1; somme=y+somme;
			}
		
	printf ("= %i x %i + %i \n",x,y,somme);
		
		}
	resultat=y+somme;
	printf ("= %i",resultat);
}

int main ()
{
	printf("Veuillez entrer deux entiers positifs \n");
	int x,y,checkx,checky;
	checkx = scanf("%i",&x);
	checky = scanf("%i",&y);
	if (checkx<1 || checky<1 || x<1 || y<1 )
		{
			printf("Vous n'avez pas entré deux entiers strictement positifs ! Veuillez recommencer\n");
			return 0;
		}
	else
	{
		affiche_resultat(x,y);
	}
	
	return 0;
}
