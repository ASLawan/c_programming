#include <stdio.h>

int main(void)
{
	int base, exponent, power;

	long double result = 1.0;
	printf("\tThis program computes the power of a number\n");
	printf("Enter the base: \n");
	scanf("%d", &base);
	printf("Enter the exponent: \n");
	scanf("%d", &exponent);

	power = exponent;	
	while (exponent != 0)
	{
		result *= base;
		exponent--;
	}

	printf("%d raise to the power %d is: %.2Lf\n", base, power, result);
	return (0);
}
