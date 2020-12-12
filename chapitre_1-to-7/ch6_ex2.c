#include <stdio.h>

int main(void)
{
	int a[3] = {10, 20, 30};
	int *p;
	int res;

	p = a;
	res = -1;

	res = *p++; // post incrémentation de l'adresse -> parcours du tableau
	//res = *++p; //pré incrémentation de l'adresse -> parcours du tableau
	//res = ++*p; //pré incrémentation de la valeur stocké dans "p" ce qui fait que
	//l'on rajoute 1 à 10

	printf("base = %p\n res = %d\n p = %p\n", a, res, p);

	return 0;
}
