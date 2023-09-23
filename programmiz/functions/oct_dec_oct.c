#include <stdio.h>

long long to_Decimal(int octal);
int to_Octal(int decimal);
int power(int base, int expo);

int main(void)
{
	int choice, octal, decimal;

	printf("\tThis program converts from octal to decimal and vice versa\n");
	printf("Choose your conversion by entering corresponding number\n");
	printf("1 ---> To Decimal\n");
	printf("2 ---> To Octal\n");
	scanf("%d", &choice);

	switch(choice)
	{
		case 1:
			printf("We will be converting from Octal to Decimal\n");
			printf("Enter the number to convert: \n");
			scanf("%d", &octal);
			printf("%d in octal is %lld in decimal.\n", octal, to_Decimal(octal));
			break;
		case 2:
			printf("We will be converting from Decimal to Octal\n");
			printf("Enter the number to convert: \n");
			scanf("%d", &decimal);
			printf("%d in decimal is %d in octal.\n", decimal, to_Octal(decimal));
			break;
		default:
			printf("Invalid Choice\n");
			break;
	}
}

int power(int base, int expo)
{
	if (expo != 0)
	{
		return (base * power(base, (expo - 1)));
	}
	else
	{
		return (1);
	}
}

long long to_Decimal(int octal)
{
	int decimal = 0, i = 0, remainder, base = 8;

	while (octal != 0)
	{
		remainder = octal % 10;

		decimal += remainder * power(base, i);

		octal /= 10;

		i++;
	}

	return (decimal);
}

int to_Octal(int decimal)
{
	int octal = 0, i = 1, remainder;

	while(decimal != 0)
	{
		remainder = decimal % 8;
	
		octal += remainder * i;
	
		decimal /= 8;
	
		i *= 10;
	}
	return (octal);
}
