#include <stdio.h>

/*sum digits using recursion*/

unsigned int sumDigits(unsigned int num);

int main(void)
{
	unsigned int a, res;

	a = 123456789;

	res = sumDigits(a);
	printf("The sum of the digits %i is: %i\n", a, res);
}

unsigned int sumDigits(unsigned int num)
{
	if (num == 0)
	{
		return (0);
	}
	else
	{
		return (num % 10) + sumDigits(num / 10);
	}
}
