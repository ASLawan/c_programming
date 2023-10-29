#include <stdio.h>

int sum(int, int);

void main(void)
{
	int s = 0;

	int (*ptr)(int, int) = sum;
	s = ptr(5, 7);
	printf("Sum is: %d\n", s);
}

int sum(int a, int b)
{
	return (a + b);
}
