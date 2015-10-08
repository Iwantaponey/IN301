#include "stdio.h"


void reinitPointeur (int **p)
{
	*p=NULL;
}

int main ()
{
	int a=1;
	int *p = &a;
	reinitPointeur(&p);
	printf("%p",p);
	return 0;
}
