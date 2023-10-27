#include <stdio.h>

int main(void)
{
	int a[3][3], i, j, sr, sc;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	printf("The matrix you typed is: \n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
	printf("The transpose of the matrix is: \n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d\t", a[j][i]);
		}
		printf("\n");
	}
	printf("Sum of individual rows and columns is: \n");
	for (i = 0; i < 3; i++)
	{
		sr = sc = 0;
		for (j = 0; j < 3; j++)
		{
			sr += a[i][j];
			sc += a[j][i];
		}
		printf("Sum rows: %d, Sum cols: %d.\n", sr, sc);
	}


	return (0);
}
