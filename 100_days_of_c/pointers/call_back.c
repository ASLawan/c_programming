#include <stdio.h>

void add(int, int);
void sub(int, int);
void mul(int, int);
void div(int, int);
void display(void (*fptr)(int, int));

int main(void)
{
	display(add);
	display(sub);	
	display(mul);
	display(div);
}

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

void display(void (*fptr)(int a, int b))
{
	fptr(5, 7);
}
