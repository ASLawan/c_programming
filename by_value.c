#include <stdio.h>

void increment(int a);

int main(void)
{
	int a;

	a = 10;
	increment(a);

	printf("The value of a is: %d\n", a);
}

void increment(int a)
{
	a = a + 1;
}
