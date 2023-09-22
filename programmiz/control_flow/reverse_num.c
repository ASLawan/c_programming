#include <stdio.h>
#include <string.h>

int main(void)
{
	int n, reverse = 0, remainder, num;

	printf("\tThis program reverses a number\n");
	printf("Enter a number: \n");
	scanf("%d", &n);
	
	num = n;
	while (n != 0)
	{
		remainder = n % 10;
		reverse = (reverse * 10) + remainder;
		n /= 10;
	}
	printf("The number %d in reversed order is: %d\n", num, reverse);
	return (0);
}
