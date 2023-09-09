#include <stdio.h>

int* returnPointer(int[]);

void main()
{
	int a[] = {1, 3, 4, 5,7};
	int *ptr;

	ptr = returnPointer(a);

	printf("%d\n", *ptr);
}

int* returnPointer(int a[])
{
	a += 2;

	return (a);
}
