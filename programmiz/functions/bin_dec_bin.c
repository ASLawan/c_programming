#include <stdio.h>

int power(int a, int b);
long long to_binary(int num);
int to_decimal(long long num);

int main(void)
{
	int dec;
	int choice;
	long long bin;

	printf("\tThis program converts a number from binary to decimal and vice versa\n");
	printf("1 --> To Binary\n");
	printf("2 --> To Decimal\n");
	printf("Choose a number corresponding to your conversion: \n");
	scanf("%d", &choice);

	switch(choice)
	{
		case 1:
			printf("We will be converting from Decimal to Binary,\n");
			printf("Enter the number to convert: \n");
			scanf("%d", &dec);
			printf("The number %d in binary is %lld.\n", dec, to_binary(dec));
			break;
		case 2:
			printf("We will be converting from Binary to Decimal\n");
			printf("Enter the number to convert: \n");
			scanf("%lld", &bin);
			printf("The number %lld in decimal is %d.\n", bin, to_decimal(bin)); 
			break;
		default:
			printf("Invalid choice\n");
			break;
	}



}

int power(int base, int expo)
{
	if (expo != 0)
	{
		return (base * (power(base, expo - 1)));
	}
	else
	{
	return (1);
	}
}

int to_decimal(long long num)
{
	int decimal = 0, i = 0, remainder, base = 2;

	while (num != 0)
	{
		remainder = num % 10;
		decimal += remainder * power(base, i);
		num /= 10;

		i++;
	}
	return (decimal);
}

long long to_binary(int num)
{
	long long binary = 0;
	int remainder, i = 1;

	while (num != 0)
	{
		remainder = num % 2;
		binary += remainder * i;
		num /= 2;

		i *= 10;
	}
	return (binary);
}
