#include <stdio.h>

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		char *s ;
		char *p1;

		s = *(argv + 1);
		p1 = s;
		while(*p1 )
		{
			printf("%p\t: %c\n", p1, *p1);
			p1++;
		}
	}
	return 0;
}
