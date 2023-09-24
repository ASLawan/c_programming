#include <stdio.h>

int main(void)
{
	int r, c, i, j, a[100][100], b[100][100], sum[100][100];

	printf("\tThis program adds two matrices\n");
	printf("Enter the number of rows(r) between 1 and 100: \n");
	scanf("%d", &r);
	printf("Enter the number of cols(r) between 1 and 100: \n");
	scanf("%d", &c);

	printf("\nEnter the elements of the first matrix: \n");
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			printf("Enter element %d%d: ", i + 1, j + 1);
			scanf("%d", &a[i][j]);
		}
	}

	printf("\nEnter the elements of the second matrix: \n");
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			printf("Enter element %d%d: ", i + 1, j + 1);
			scanf("%d", &b[i][j]);
		}
	}

	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			sum[i][j] = a[i][j] + b[i][j];
		}
	}

	printf("\nThe sum of the two matrices is: \n\n");
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			printf("%d ", sum[i][j]);
		       if (j == c - 1)
		       {
			       printf("\n\n");
		       }	       
		}
	}

	return (0);

}
