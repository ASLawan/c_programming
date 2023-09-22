#include <stdio.h>

int main(void)
{
	int num, i, sum = 1;
	printf("\tThis program computes the factorial of a number\n");
	printf("Enter a positive number: \n");
	scanf("%d", &num);

	if (num < 0)
	{
		printf("Please enter a positive number\n");
	}
	for (i = num; i >= 1; i--)
	{
		sum *= i;
	}
	printf("The factorial of %d is: %d\n", num, sum);
}
