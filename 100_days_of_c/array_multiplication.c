#include <stdio.h>

int main(void)
{
	int a[3][3], b[3][2], c[3][2], i, j, k, sum;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	for (i = 0; i  < 3; i++)
	{
		for (j = 0; j < 2; j++)
		{
			scanf("%d", &b[i][j]);
		}
	}
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 2; j++)
		{
			sum = 0;
			for (k = 0; k < 3; k++)
			{
				sum += (a[i][k] * b[k][j]);
			}
			c[i][j] = sum;
		}
	}

	printf("The first matrix is: \n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
	printf("\nThe second matrix is: \n");
	for (i = 0; i  < 3; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("%d\t", b[i][j]);
		}
		printf("\n");
	}
	printf("\nThe product of the two matrices is: \n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("%d\t", c[i][j]);
		}
		printf("\n");
	}
	
	return (0);
}
