#include <stdio.h>

int main(void)
{
	int X[5];
	int i;

	for(i = 0; i < 4; i++)
	{
		printf("&X[%d] = %p\n", i, &X[i]);
	}
	printf("The address of the array is %p\n", X);

	return (0);
}
