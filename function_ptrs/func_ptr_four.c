#include <stdio.h>

void BubbleSort(int A[], int n, int (*ptr)(int, int));
int compare(int a, int b);

int main(void)
{
	int i, A[] = {3, 2, 1, 5, 7, 6, 9, 8};

	BubbleSort(A, 8, compare);
	for (i = 0; i < 8; i++)
	{
		printf("%d ", A[i]);
	}
	printf("\n");
}
int compare(int a, int b)
{
	if (a > b)
	{
		return (1);
	}
	else
	{
		return (-1);
	}
}

void BubbleSort(int A[], int n, int (*compare)(int, int))
{
	int i, j, temp;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n - 1; j++)
		{
			if (compare(A[j], A[j + 1]) > 0)
			{
				temp = A[j];
				A[j] = A[j + 1];
				A[j + 1] = temp;
			}
		}
	}
}
