#include <stdio.h>

void print(int*, int*);

int main(void)
{
	int x = 7;
	int y = 5;
	print(&x, &y);
	printf("Values inside main (calling function)\n");
	printf("x = %d, y = %d\n", x, y);
}

void print(int *x, int *y)
{
	*x = 5;
	*y = 7;

	printf("Values inside the print (Called function)\n");
	printf("x = %d, y = %d\n", *x, *y);
}
