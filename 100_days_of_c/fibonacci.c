#include <stdio.h>

int main(void)
{
	int a = 0;
	int b = 1;
	int i, result, n;

	printf("Enter the number of terms to print: ");
	scanf("%d", &n);
	
	printf("The first %d terms of the Fibonacci series:\n", n);
	for (i = 1; i <= n; i++)
	{
		printf("%d ", a);
		result = a + b;
		a = b;
		b = result;
	}
	printf("\n");

}
