#include <stdio.h>

int main(void)
{
	char name[20];

	printf("What is your name?: ");
	scanf("%s", name);
	printf("Hello %s!\n", name);

	return 0;
}
