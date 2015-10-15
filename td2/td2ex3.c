#include "stdio.h"
#include "stdlib.h"
#include "math.h"

typedef struct element{
	int val;
	struct element* suivant;
}ELEMENT;

typedef ELEMENT* Liste;

Liste initListe()
{
	return NULL;
}

int estVide (Liste L)
{
	return L==NULL;
}

void affiche_liste (Liste L)
{
	if (estVide(l)) printf 
}

int main ()
{
	int test;
	Liste L;
	L=initListe();
	test=estVide(L);
	return 0;
}
