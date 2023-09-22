#include <stdio.h>

int main(void)
{
	long long int n;
	int count = 0;

	printf("\tThis program counts number of integers\n");
	printf("Enter a number: \n");
	scanf("%lld", &n);

	do 
	{
		n /= 10;
		count++;
	} while (n != 0);

	printf("Number of digits is: %d\n", count);

	return (0);
}
