#include <stdio.h>

int main(void)
{
	int a;
	float f;
	void *p;

	a = 9;
	f = 4.5;
	p = &a;

	printf("%d : that's the int pointed by void *p\n", *(int *)p);

	p = &f;

	printf("%f : that's the float pointed by void *p\n", *(float *)p);

	return 0;
}
