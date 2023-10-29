#include <stdio.h>

void add(int a, int b)
{
	printf("%d\n", a + b);
}

void sub(int a, int b)
{
	printf("%d\n", a - b);
}
void mul(int a, int b)
{
	printf("%d\n", a * b);
}
void div(int a, int b)
{
	printf("%d\n", a / b);
}
void mod(int a, int b)
{
	printf("%d\n", a % b);
}

void main(void)
{
	int choice, a, b;

	void (*fptr[10])(int, int) = {add, sub, mul, div, mod};

	printf("Enter your operation choice: ");
	scanf("%d", &choice);
	printf("Enter operands a and b: ");
	scanf("%d %d", &a, &b);

	(*fptr[choice])(a, b);
}
