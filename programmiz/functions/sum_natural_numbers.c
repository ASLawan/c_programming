#include <stdio.h>

int add_numbers(int);

int main(void)
{
	int n;

	printf("\tThis program sums natural numbers upto n using recursion\n");
	printf("Enter a positive number: \n");
	scanf("%d", &n);

	printf("Sum from zero to %d is: %d\n", n, add_numbers(n));

	return (0);
}

int add_numbers(int num)
{
	if (num != 0)
	{
		return num + add_numbers(num - 1);
	}
	else
	{
		return num;
	}
}
