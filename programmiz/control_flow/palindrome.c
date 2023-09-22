#include <stdio.h>

int main(void)
{
	int num, reversed = 0, remainder, original;

	printf("\tThis program checks if a number is a palindrome\n");
	printf("Enter a number: \n");
	scanf("%d", &num);

	original = num;

	while (num != 0)
	{
		remainder = num % 10;
		reversed = (reversed * 10) + (remainder);
		num /= 10;
	}
	
	printf("Original: %d\n", original);
	printf("Reversed: %d\n", reversed);
	if (reversed == original)
	{
		printf("%d is a palindrome\n", original);
	}
	else
	{
		printf("%d is not a palindrome\n", original);
	}

}
