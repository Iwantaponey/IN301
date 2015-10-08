#include "stdio.h"

void fonction (int *a, int *b)
{
	int tmp;
	tmp = (*a);
	(*a) = (*b);
	(*b) = tmp;
}

int main ()
{
	int x,y;
	x=1;
	y=-1;
	fonction(&x,&y);
	printf("La valeur de x et y est %d et %d",x,y);
	return 0;
}
