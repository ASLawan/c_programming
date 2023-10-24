#include <stdio.h>

int main(void)
{
	int n, i, j, k, rows, spaces;

	printf("Enter the number of rows to print: ");
	scanf("%d", &rows);

	for (i = 1; i <= rows; i++)
	{
		spaces = rows - i;
		for (j = 0; j < spaces; j++)
		{
			printf("  ");
		}

		for (k = 1; k <= i; k++)
		{
			printf("%d ", k);
		}
		printf("\n");
	}

	return (0);
}
