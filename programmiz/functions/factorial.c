#include <stdio.h>

int factorial(int);

int main(void)
{
	int num;

	printf("\tThis program computes the factorial of a number using recursion\n");
	printf("Enter a positive number: \n");
	scanf("%d", &num);

	printf("The factorial of %d is: %d\n", num, factorial(num));

	return (0);
}

int factorial(int num)
{
	if (num != 0)
	{
		return num * factorial(num - 1);
	}
	else
	{
		return 1;
	}
}
