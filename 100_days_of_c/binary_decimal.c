#include <stdio.h>

int main(void)
{
	int decimal = 0, binary, base = 1, remainder, num;

	printf("Enter a number in binary: ");
	scanf("%d", &binary);

	num = binary;
	while (binary != 0)
	{
		remainder = binary % 10;
		decimal = decimal + (remainder * base);
		binary /= 10;
		base *= 2;
	}

	printf("The decimal equivalent of %d is: %d\n", num, decimal);

	return (0);
}
