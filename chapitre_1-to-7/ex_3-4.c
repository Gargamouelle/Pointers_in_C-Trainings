#include <stdio.h>

int main(void)
{
	int a; //data variable
	int *p; //pointer variable
	int **q; //pointer to pointer
	int ***r;//pointer to pointer to pointer

	a = 10; //assigning 10 to a
	p = &a; //assigning address of a to p
	q = &p; //assigning address of p to q | single pointer to double pointer
	r = &q; //assigning address of q to r | double pointer to tripal pointer

	printf("a = %d; &a = %p;\n*p = %d; p = %p; &p = %p;\n**q = %d; q = %p; &q = %p;\n***r = %d; r = %p; &r = %p;\n",
			a, &a, *p, p, &p, **q, q, &q, ***r, r, &r);

	return 0;
}
