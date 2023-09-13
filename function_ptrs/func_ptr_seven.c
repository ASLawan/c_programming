#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int compare(const void* a, const void* b);

int main(void)
{
	int i, A[] = {20, 34, 2, 7, 89, 45, 10, 9};

	qsort(A, 8, sizeof(int), compare);
	for (i = 0; i < 8; i++)
	{
		printf("%d ", A[i]);
	}
	printf("\n");
}

int compare(const void* a, const void* b)
{
	int A = *((int*)a);
	int B = *((int*)b);
	return (A - B);
}


