#include <stdio.h>

int main(void)
{
	int num, i;

	printf("\tThis program prints multiplication Table\n");
	printf("Enter a number for the table: \n");
	scanf("%d", &num);

	if (num <= 0)
	{
		printf("Enter only positive numbers\n");
	}
	for (i = 1; i <= 12; i++)
	{
		printf("%d * %d  = %d\n", num, i, num * i); 
	}
	return (0);
}
