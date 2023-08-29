#include <stdio.h>

int main(void)
{
	int a[] = {2, 4, 6, 8, 10, 12};
	int i;
	int *p = a;


	for (i = 0; i < 6; i++)
	{
		printf("Address %d: %p\n", i, &a[i]);
		printf("Address %d: %p\n",i, a+i);
		printf("Value at %d: %d\n", i, a[i]);
		printf("Value at %d: %d\n", i, *(a+i));
	}
}
