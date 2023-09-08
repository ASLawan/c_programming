#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int _strlen(char *s);

/**
 * main - program entry point
 *
 * Return: Always (0)
 */

int main()
{
	char word[20];
	int word_length;

	printf("\nEnter a word: \n");
	scanf("%s", word);
	word_length  = _strlen(word);

	printf("The word you have typed is %d characters long\n", word_length);
}

int _strlen(char *s)
{
	int i;
	int  count = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		count += 1;
	}
	return (count);
}
