#include <stdio.h>

int main(void)
{
	char c;

	printf("\tThis program checks if what you have typed is an alphabet or not\n");
	printf("Enter a character: \n");
	scanf("%c", &c);

	if (c >= 'a' && c <= 'z' || c >= 'A' && c >= 'Z')
	{
		printf("%c is a letter of the alphabet\n", c);
	}
	else
	{
		printf("%c is not a letter of the alphabet\n", c);
	}

	return (0);
}
