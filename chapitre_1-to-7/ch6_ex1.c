#include <stdio.h>

int main(void)
{
	int tab[4] = { 10, 20, 30, 40 };
	int *p;

	p = tab;

	while(*p)
	{
		printf("%p\t : %d\n", p, *p);
		++p;
	}

	return 0;
}
