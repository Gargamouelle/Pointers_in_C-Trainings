/* Utilisation d'un pointeur arithmétique afin d'accéder aux élements d'un tableau */

#include <stdio.h>
#include <stdlib.h>

#define MAX 10

// Déclaration et initialisation d'un tableau d'entiers
int tab_i[MAX] = {0,1,2,3,4,5,6,7,8,9};

// Déclration d'un pointeur vers int et d'une variable int
int *ptr_i;
int count;

// Déclaration et initialisation d'un tableau de type double
double tab_d[MAX] = {.0,.1,.2,.3,.4,.5,.6,.7,.8,.9};

// Déclaration d'un pointeur vers double

double *ptr_d;

int main()
{
	// Initialisation des pointeurs
	ptr_i = tab_i;
	ptr_d = tab_d;

	// Affichage des éléments du tableau
	printf("\nElements des tableaux de int et double:\n");

	count = 0;
	while (count++ < MAX)
		printf("%d\t%f\n", *ptr_i++, *ptr_d++);

	// Affichage des adresses des éléments du tableau
	printf("\nAdresses des éléments:\n");

	count = 0;
	while (count++ < MAX)
		printf("%ld\t%ld\n", ptr_i++, ptr_d++);

	return 0;
}
