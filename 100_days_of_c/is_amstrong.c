#include <stdio.h>

int main(void)
{
	int num, count = 0, cnt, result = 0, product = 1;
	int remainder, quotient;

	printf("Enter number to check: ");
	scanf("%d", &num);

	quotient = num;
	/*Get the number of digits*/
	while (quotient != 0)
	{
		quotient /= 10;
		count += 1;
	}
	/*Make a copy of count*/
	cnt = count;
	quotient = num;
	while (quotient != 0)
	{
		/*Get the last digit*/
		remainder  = quotient % 10;
		/*Get the value of multiplying the digit count times*/
		while (cnt != 0)
		{
			product *= remainder;
			cnt -= 1;
		}
		/*Add the value obtained to result*/
		result += product;
		/*make another copy of count*/
		cnt = count;
		/*Remove the last digit from the number*/
		quotient /= 10;
		/*Reset product to 1*/
		product = 1;
	}
	if (result == num)
	{
		printf("%d is an Armstrong number.\n", num);
	}
	else
	{
		printf("%d is NOT an Armstrong number.\n", num);
	}

	return (0);
}

