#include <stdio.h>

int factorial(int);

int main()
{
	int num, res;

	printf("\nThis program computes the fatorial of any given number\n");
	printf("\nEnter number to compute factorial\n");
	scanf("%d", &num);

	res = factorial(num);

	printf("The factorial of %d is: %d\n", num, res);
}

int factorial(int n)
{
	int res;

	if (n == 0)
	{
		res = 1;
	}
	else
	{
		res = n * factorial(n - 1);
	}

	return (res);
}
