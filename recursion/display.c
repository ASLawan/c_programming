#include <stdio.h>

void display(int n);

void main()
{
	int num, result;

	printf("\nEnter a number: \n");
	scanf("%d", &num);

	display(num);

}

void display(int n)
{
	int base = 1;

	if (n == 1)
	{
		printf("%d", base);
		printf("\n");
	}
	else
	{
		printf("%d ", n);
		display(n-1);
		/*printf("%d ", n);*/
	}
}
