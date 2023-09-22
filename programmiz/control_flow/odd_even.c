#include <stdio.h>

int main(void)
{
	int number;


	printf("Enter a number: \n");
	scanf("%d", &number);
	
	if (number % 2 == 0)
	{
		printf("%d is an even number\n", number);
	}else
	{
			printf("%d is an odd number\n", number);
	}
}
