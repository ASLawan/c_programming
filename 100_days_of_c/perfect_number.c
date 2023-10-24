#include <stdio.h>

int main(void)
{
	int num, i, remainder, sum = 0;

	printf("Enter number to check: ");
	scanf("%d", &num);

	for (i = 1; i < num; i++)
	{
		remainder = num % i;
		if (remainder == 0)
		{
			sum += i;
		}
	}

	if (sum == num)
	{
		printf("%d is a perfect number.\n", num);
	}
	else
	{
		printf("%d is not a perfect number\n", num);
	}
}
