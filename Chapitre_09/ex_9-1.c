// Exemple simple d'utilisation d'un pointeur

#include <stdio.h>
#include <stdlib.h>

// Initialisation et déclaration d'une variable int
int var;
var = 1;

// Déclaration d'un pointeur vers var
int *ptr;

int main()
{
	// Initialisation de ptr
	ptr = &var;

	// Accès direct et accès indirect à var
	printf("Accès direct, var = %d\n", var);
	printf("Accès indirect, var = %d\n", *ptr);

	// Affichage de l'adresse à travers les deux méthodes
	printf("L'adresse de var est %d\n", &var);
	printf("L'adresse de var est %d\n", ptr);

	return 0;
}
