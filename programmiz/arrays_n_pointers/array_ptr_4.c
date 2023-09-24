#include <stdio.h>

int main(void)
{
	int x[10] = {1,11,21, 31, 41, 51, 61,71, 81, 91};
	int* ptr;
	int len, i;

	ptr = &x[0];
	len = sizeof(x) / sizeof(x[0]);

	/*use pointer to traverse array*/
	for (i = 0; i < len; i++)
	{
		printf("x[%d]: %d\n", i, *(ptr + i));
	}	
}
