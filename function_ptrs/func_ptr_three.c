#include <stdio.h>

void BubbleSort(int *A, int n);

int main(void)
{
	int i, A[] = {3, 2, 1, 5, 7, 6, 9, 8};

	BubbleSort(A, 8);
	for (i = 0; i < 8; i++)
	{
		printf("%d ", A[i]);
	}
	printf("\n");
}

void BubbleSort(int *A, int n)
{
	int i, j, temp;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n - 1; j++)
		{
			if (A[j] < A[j + 1])
			{
				temp = A[j];
				A[j] = A[j + 1];
				A[j + 1] = temp;
			}
		}
	}
}
