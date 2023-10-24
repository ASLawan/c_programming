#include <stdio.h>

int main(void)
{
	int num, quotient, remainder, factorial = 1, i, result = 0;

	printf("Enter number to check: ");
	scanf("%d", &num);

	quotient = num;
	while (quotient != 0)
	{
		remainder = quotient % 10;
		for ( i = 1; i <= remainder; i++)
		{
			factorial *= i;
		}
		result += factorial;
		factorial = 1;
		quotient /= 10;
	}

	if (result == num)
		printf("%d is a strong number.\n", num);
	else
		printf("%d is not a strong number\n", num);

	return (0);

}
