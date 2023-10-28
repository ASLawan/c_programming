#include <stdio.h>

int main(void)
{
	int a = 10, b = 20;
	int *p, *q;

	p = &a;
	q = &b;
	printf("Value of a: %d\n", a);
	printf("From pointer: %d\n", *p);
	printf("Address of a: %p\n", &a);
	printf("From pointer: %p\n", p);
	printf("Address of p: %p\n", &p);

	return (0);
}
