#include <stdio.h>

int main(void)
{
	int x, y;

	printf("Enter two numbers to add: ");
	scanf("%d %d", &x, &y);

	while (y != 0)
	{
		x++;
		y--;
	}

	printf("The sum is: %d\n", x);

	return (0);
}
