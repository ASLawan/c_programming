#include <stdio.h>

void displayprimes(int a, int b);

int main(void)
{
	int num1,  num2;

	printf("\tThis program prints all prime numbers between two limits\n");
	printf("Enter the lower limit: \n");
	scanf("%d", &num1);
	printf("Enter the upper limit: \n");
	scanf("%d", &num2);
	printf("\nWe will be printing prime numbers between %d and %d\n", num1, num2);

	displayprimes(num1, num2);

	return (0);
}

void displayprimes(int a, int b)
{
	int flag, i;

	while (a < b)
	{
		flag = 0;
	
		if (a <= 1)
		{
			a++;
			continue;
		}
	
		for (i = 2; i < a / 2; i++)
		{
			if (a % i == 0)
			{
				flag = 1;
				break;
			}
		}

		if (flag == 0)
		{
			printf("%d ", a);
		}

		a++;
	}
	printf("\n");

}
