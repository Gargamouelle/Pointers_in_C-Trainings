// Comment passer d'un tableau à une fonction

#include <stdio.h>
#include <stdlib.h>

#define MAX 7

int tab[MAX];
int count;

int largest(int x[], int y);

int main()
{
	// Lecture des MAX à partir du clavier
	count = 0;

	while (count++ < MAX)
	{
		printf("Entrez une valeur entière: ");
		scanf("%d", &tab[count]);
	}

	// Appel de la fonction et affichage de la valeur renvoyée
	printf("\n\nLa valeur la plus grande est %d\n", largest(tab, MAX));
	
	return 0;
}

// La fonction largest() renvoie la valeur la plus grande d'un tableau d'entiers

int largest(int x[], int y)
{
	int count;
	int biggest;

	biggest = x[0];
	count = 1;

	while (count++ < y)
	{
		if (x[count] > biggest)
			biggest = x[count];
	}

	return biggest;
}
