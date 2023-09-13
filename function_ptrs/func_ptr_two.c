#include <stdio.h>

void printHello(char *name);

int main(void)
{
	char name[15];
	printf("\nWhat is your name? ");
	scanf("%s", name);
	/*declaring a pointer to function*/
	void (*ptr)(char *);

	ptr = printHello;
	ptr(name);
}

void printHello(char *name)
{
	printf("Hello, %s\n", name);
}
