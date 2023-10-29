#include <stdio.h>

void swap(int *m, int *n);

int main(void)
{
	int a, b;

	a = 5;
	b = 7;
	printf("a --> %d\tb --> %d\n", a, b);
	swap(&a, &b);
	printf("a --> %d\tb --> %d\n", a, b);
}

void swap(int *m, int *n)
{
	int tmp;

	tmp = *m;
	*m = *n;
	*n = tmp;
}
