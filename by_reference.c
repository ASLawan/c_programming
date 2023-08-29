#include <stdio.h>

void increment(int *a);

int main(void)
{
	int p;

	p = 10;
	increment(&p);
	printf("The value of p is: %d\n", p);
}

void increment(int *a)
{
	*a = (*a) + 1;
}

