#include <stdio.h>

int main(void)
{
	int a[5] = {1, 2, 3, 4, 5};
	int *p = &a[0];

	printf("First element: %d\n", a[0]);
	printf("From pointer: %d\n", *p);
	printf("Address of element: %p\n", &a[0]);
	printf("From pointer: %p\n", p);
	
	p = p + 2;
	printf("\nElement at p: %d\n", *p);
	printf("Address of element: %p\n", p);
		

	return (0);
}
