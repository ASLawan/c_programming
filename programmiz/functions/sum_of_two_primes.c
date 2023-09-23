#include <stdio.h>

int check_prime(int);

int main(void)
{
	int num, i, flag = 0;

	printf("\tThis program checks if a given number can be expressed as sum of two prime numbers\n");
	printf("Enter a number to check: \n");
	scanf("%d", &num);

	for (i = 2; i <= num / 2; i++)
	{
		if (check_prime(i) == 1)
		{
			if (check_prime(num - i) == 1)
			{
				printf("%d can be expressed as a sum of %d and %d.\n", num, i, num - i);
				printf("%d = %d + %d.\n", num, i, num - i);
				flag = 1;
			}
		}
	}
	
	if (flag == 0)
	{
		printf("%d cannot be expressed as a sum of two prime numbers\n", num); 
	}

	return (0);
}

int check_prime(int num)
{
	int i, is_prime = 1;

	if (num == 0 || num == 1)
	{
		is_prime = 0;
	}
	else
	{
		for (i = 2; i <= num / 2; i++)
		{
			if (num % i == 0)
			{
				is_prime = 0;
				break;
			}
		}
	}
	return (is_prime);
}
