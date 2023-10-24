#include <stdio.h>

int main(void)
{
	int base, exponent, expo, power = 1;
	double pow = 1.0;

	printf("Enter the base: ");
	scanf("%d", &base);
	printf("Enter the exponent: ");
	scanf("%d", &exponent);

	expo = exponent;

	if (exponent > 0)
	{
		while (exponent != 0)
		{
			power = power * base;
			exponent--;
		}
	printf("%d raised to the power %d is: %d\n", base, expo, power);	
	}
	else
	{
		while (exponent < 0)
		{
			pow = pow * (1.0 / base);
			exponent++;
		}
	printf("%d raised to the power %d is: %.1f\n", base, expo, pow);
	}
	
	return (0);
}
