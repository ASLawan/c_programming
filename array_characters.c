#include <stdio.h>

/*print strings*/

void printStr(char* s);

int main(void)
{
	char name[20] = "Nawal Nitsua";
	printStr(name);
}

void printStr(char* s)
{
	while (*s != '\0')
	{
		printf("%c", *s);
		s++;
	}
	printf("\n");
}
