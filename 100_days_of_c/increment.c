#include <stdio.h>

int main(void)
{
	int a = 4, b = 3;

	/*printf("%d\n", a + b);
	printf("%d\n", a+++b);*/
	printf("%d\n", a + ++b);
	printf("%d\n", a++ + b);
	printf("%d\n", a++ + ++b);

	return (0);
}
