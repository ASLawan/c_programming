#include <stdio.h>

int main(void)
{
	int a = 20;

	int *p = &a;
	int **q = &p;
	int ***r = &q;

	printf("Value of a: %d\n", a);
	printf("From pointer: %d\n", *p);
	printf("From double pointer: %d\n", *(*q));
	printf("From triple pointer: %d\n", *(*(*r)));

	printf("\nAddress of a: %p\n", &a);
	printf("From pointer: %p\n", p);
	printf("Address of p: %p %p\n", &p, q);
	printf("Address of q: %p %p\n", &q, r);
	printf("Address of r: %p\n", &r);
	
	return (0);
}
