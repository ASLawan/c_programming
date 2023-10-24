#include <stdio.h>

int main(void)
{
	int num, decimal, remainder, binary[8], i = 0, j;


	printf("Enter a number in decimal: ");
	scanf("%d", &decimal);
	
	num = decimal;

	while (decimal != 0)
	{
		remainder = decimal % 2;
		binary[i] = remainder;
		decimal /= 2;
		i++;
	}
		
	for (j = 0; j < i; j++)
	{
		printf("%d", binary[j]);
	}
	printf("\n");
	return (0);
}
