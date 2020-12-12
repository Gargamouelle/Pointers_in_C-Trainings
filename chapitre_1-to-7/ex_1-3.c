#include <stdio.h>

int main(void)
{
	int a;
	int *p;

	a = 10;
	p = &a;

	printf("a = %d , *p = %d, &a = %p, p = %p, &p = %p\n", a, *p, &a, p, &p);

	return 0;
}
