#include <stdio.h>

int main(void)
{
	int number, i = 0, sum = 0;

	printf("\tThis program sums intergers upto and including n\n");
	printf("Enter a positive number: \n");
	scanf("%d", &number);

	while (i <= number)
	{
		sum += i;
		i++;
	}
	printf("The sum of natural numbers from 0 to %d is: %d\n", number, sum);
}
