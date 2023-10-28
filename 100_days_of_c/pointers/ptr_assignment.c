#include <stdio.h>

int main(void)
{
	int a = 10, b = 20;
	int *p, *q;

	p = &a;
	q = p;

	printf("Values of a: %d %d %d\n", a, *p, *q);

	p = &a;
	q = &b;
	printf("Values of a p and q: %d %d %d\n", a, *p, *q);

	p = &a;
	q = &b;
	*q = *p;
	printf("Values of a p and q: %d %d %d\n", a, *p, *q);

	return (0);
}
