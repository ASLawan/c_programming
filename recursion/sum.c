#include <stdio.h>

int sum(int);

void main()
{
	int a, result;

	printf("\nThis program sums up numbers upto n\n");
	printf("Enter a number: \n");
	scanf("%d", &a);

	result = sum(a);

	printf("\nThe sum of numbers from 1 to %d is: %d\n", a, result);
}

int sum(int num)
{
	int total = 0;


	if (num == 1)
	{
		return (num);
	}
	else
	{
		total = num + sum(num - 1);	
	}

	return (total);
}
