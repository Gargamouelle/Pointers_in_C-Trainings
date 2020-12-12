// Comment transmettre un tableau à une fonction deuxième méthode

#include <stdio.h>
#include <stdlib.h>

#define MAX 7

int tab[MAX+1];

int count;

int largest(int *x);

int main()
{
	// Lecture des MAX valeurs à partir du clavier
	count = -1;

	while (++count < MAX)
	{
		printf("Entrez une valeur entière: ");
		scanf("%d", (tab + count));

		if (*(tab + count) == 0)
			count = MAX; /* Sortie de la boucle*/
	}

	*(tab + MAX)=0;
	// Appel de la fonction et affichage de la valeur renvoyée
	printf("\n\nLa valeur la plus grande est: %d\n", largest(tab));

	free(tab);
	return 0;
}

// La fonction largest() renvoie la plus grande valeur du tableau

int largest(int *x)
{
	int count;
	int biggest;
	
	biggest = *(x + 0);
	count = 1;
	while (*(x + count++) != 0)
	{
		if (*(x + count) > biggest)
			biggest = *(x + count);
	}

	return biggest;
}
