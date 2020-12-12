#include <stdio.h>

int main(void)
{
	int a;
	int *p_a;

	a = 10;

	p_a = &a;

	printf("Valeurs : %d   ---- %d\n", a, *p_a);
	printf("Adresses : %p ---- %p\n", &a, p_a);
	printf("Adresse de p : %p", &p_a);

	return 0;
}
