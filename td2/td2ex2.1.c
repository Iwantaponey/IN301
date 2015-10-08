#include "stdio.h"
#include "stdlib.h"
#include "time.h"


typedef struct Tableau 
	{ 
		int taille;
		int tab [100];
		
	}TABLEAU;


int alea (int n)
{
	int i;
	i=rand();
	n=i%n;
	return n; 
}

long unsigned int produit (TABLEAU T)
{
	int i;
	long unsigned int produit;
	produit=1;
	for (i=0; i<T.taille; i++)
	{
		produit = produit * T.tab[i];
	}
	
	return produit;
}

int minimum (TABLEAU T)
{	
	int i;
	int min=T.tab[0];
	for (i=1;i<T.taille;i++)
	{
		if (T.tab[i]<min)
		min = T.tab[i];
	}
	return min;
}

TABLEAU init_tableau(TABLEAU T)
{
	int i;
	T.taille=10;
	for (i=0; i<10; i++)
	{
		T.tab[i]=alea(20);
	}
	return T;
}

void affiche_tableau(TABLEAU T)
{
	int i;
	for (i=0; i<T.taille; i++)
	{
		printf("%d \n",T.tab[i]);
	}
}

TABLEAU decale_tableau(TABLEAU T)
{
	int i;
	for (i=T.taille;i>0;i--)
	{
		T.tab[i+1]=T.tab[i];
	}
	T.taille++;
	T.tab[0]=0;
	return T;
}

TABLEAU trie_tableau(TABLEAU T)
{
	int i;	
	for (i=0;i<T.taille;i++)
	{
		
	}
	return T;
}

int main ()
{
	int min;
	srand(time(NULL));
	TABLEAU T;
	T=init_tableau(T);
	T=decale_tableau(T);
	affiche_tableau(T);
	printf("Le produit des éléments du tableau est égal à %lu\n",produit(T));
	printf("La valeur minimale du tableau est %d\n",minimum(T));
}
