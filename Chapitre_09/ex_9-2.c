/* Ce programme montre la relation existant entre les adresses et les élements de tableaux
 * contenant différents types de données. */

#include <stdio.h>
#include <stdlib.h>

//Déclaration de trois tableaux et d'une variable compteur
short sh[10];
int x;
int i[10];
double d[10];

int main()
{
	// Affichage de l'entête du tableau
	printf("\t\t\tTableau des adresses des elements\n");
	printf("\t\tShort\t\t\tInt\t\t\tDouble");
	printf("\n ========================================");
	printf("===========================================");

	// Affichage de l'adresse de chaque élément du tableau
	x = 0;
	while (x++ < 10)
		printf("\nElement %d:\t%ld\t\t%ld\t\t%ld", x, &sh[x], &i[x], &d[x]);

	printf("\n ========================================");
	printf("===========================================\n");

	return 0;
}
