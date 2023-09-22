#include <stdio.h>

int main(void)
{
	int num, i, t1, t2, next_t;

	t1 = 0;
	t2 = 1;
	next_t = t1 + t2;

	printf("\tThis program prints the Fibonacci series upto n\n");
	printf("Enter a number: ");
	scanf("%d", &num);

	printf("Fibonacci series: %d, %d, ", t1, t2);

	for (i = 3; i <= num; i++)
	{
		printf("%d, ", next_t);
	       t1 = t2;
	       t2 = next_t;
	  	next_t = t1 + t2;     
	}
	printf("\n");
	return (0);
}
