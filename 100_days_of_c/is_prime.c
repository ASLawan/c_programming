#include <stdio.h>
#include <math.h>

int main(void)
{
	int num, i, val1, val2, flag = 0;

	printf("Enter the number to check: ");
	scanf("%d", &num);

	val1 = ceil(sqrt(num));
	val2 = num;

	for (i = 2; i < val1; i++)
	{
		if (val2 % i == 0)
		{
			flag = 1;
		}
	}

	if ((flag == 0 && val2 != 1) || val2 == 2 || val2 == 3)
	{
		printf("%d is a prime number.\n", num);
	}
	else
	{
		printf("%d is not a prime number.\n", num);
	}
}
