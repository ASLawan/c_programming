#include <stdio.h>

/*add two numbers*/

void sum();

int main(void)
{
sum();
}

void sum()
{
	int a, b, sum = 0;

	printf("This program adds two numbers\n");
	printf("Enter first number: \n");
	scanf("%d", &a);
	printf("Enter second number: \n");
	scanf("%d", &b);
	
	sum = a + b;
	printf("The sum of %d and %d is: %d\n", a, b, sum);

}
