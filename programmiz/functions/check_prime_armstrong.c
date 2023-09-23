#include <stdio.h>

int check_prime(int num);
int check_armstrong(int num);
int power(int, int);

int main(void)
{
	int num, choice, flag;

	printf("\tThis program can check if a number is a prime number or armstrong number\n");
	printf("1 ---> Is Prime\n");
	printf("2 ---> Is Armstrong\n");
	printf("Enter 1 or 2 for a corresponding check: \n");
	scanf("%d", &choice);

	if (choice == 1)
	{
		printf("We will be checking if a number is prime\n");
	}
	else if (choice == 2)
	{
		printf("We will be checking if a number is armstrong\n");
	}
	else 
	{
		printf("Invalid choice\n");
	}
	printf("Enter the number you want to check: \n");
	scanf("%d", &num);
	if (num)
	{
		if (choice == 1)
		{
			flag = check_prime(num);
		}
		if (choice == 2)
		{
			flag = check_armstrong(num);
		}
	}
	if (flag == 0)
	{
		if (choice == 1)
		{
			printf("%d is a prime number\n", num);
		}
		else if (choice == 2)
		{
			printf("%d is an armstrong number\n", num);
		}
	}
	else if (flag == 1)
	{
		if (choice == 1)
		{
			printf("%d is not a prime number\n", num);
		}
		else if (choice == 2)
		{
			printf("%d is not an armstrong number\n", num);
		}
	}

	return (0);
}

int check_prime(int num)
{
	int i, flag = 0;

	if (num <= 1)
	{
		flag = 1;
	}

	for (i = 2; i <= num / 2; i++)
	{
		if (num % i == 0)
		{
			flag = 1;
			break;
		}
	}

	return (flag);
}

int power(int remainder, int expo)
{
	int res = 1;

	while (expo >= 1)
	{
		res *= remainder;
		expo--;
	}
	return (res);
}
int check_armstrong(int num)
{
	int num_digits = 0, remainder, result = 0, original_num, flag, armstrong;

	original_num = armstrong = num;

	while (num != 0)
	{
		num /= 10;
		num_digits++;
	}

	while (original_num != 0)
	{
		remainder = original_num % 10;
		result += power(remainder, num_digits);
		original_num /= 10;
	}
	
	if (result == armstrong)
	{
		flag = 0;
	}
	else
	{
		flag = 1;
	}

	return (flag);
}


