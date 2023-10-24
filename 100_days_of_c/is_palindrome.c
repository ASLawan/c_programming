#include <stdio.h>

int main(void)
{
	int num, result = 0, quotient, remainder;

	printf("Enter number to check: ");
	scanf("%d", &num);

	quotient = num;
	while (quotient != 0)
	{
		/*use % to get the last digit*/
		remainder = quotient % 10;

		/*reverse the number starting with the digit gotten above*/
		result = (result * 10) + remainder;

		/*use / to remove the last digit*/
		quotient /= 10;
	}

	if (result == num)
	{
		printf("The number is palindrome\n");
	}
	else
	{
		printf("The number is NOT palindrome\n");
	}

	return (0);

}
