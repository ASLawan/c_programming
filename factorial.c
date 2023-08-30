#include <stdio.h>

/*Use of recursion to carry out factorial*/

int factorial(int n);

int main(void)
{
	int a, res;

	a = 5;
	res = factorial(5);
	printf("5! is: %d\n", res);
}

int factorial(int n)
{
	if (n <= 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
