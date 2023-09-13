#include <stdio.h>

int add(int, int);

int main(void)
{
	int c;

	/*declare poiinter to function add*/
	int (*ptr)(int, int);
	ptr = &add;
	c = (*ptr)(2, 3);
	printf("%d\n", c);
}

int add(int a, int b)
{
	return (a + b);
}
