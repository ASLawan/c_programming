#include <stdio.h>

int power(int, int);

int main(void)
{
	int base, expo, result;

	printf("\tThis program computes the power of a number\n");
	printf("Enter a base: \n");
	scanf("%d", &base);
	printf("Enter the exponent: \n");
	scanf("%d", &expo);

	if (expo < 0)
	{
		printf("Enter a positive number for the exponent\n");
	}
	else
	{
		result = power(base, expo);
		printf("%d^%d = %d\n", base, expo, result);
	}

	return (0);
}

int power(int base, int expo)
{
	if (expo != 0)
	{
		return (base * power(base, expo - 1));
	}
	else
	{
		return (1);
	}
}
