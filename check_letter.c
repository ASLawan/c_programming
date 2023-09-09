#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - program entry point
 *
 * Return: 0, Always success
 */
char *check_letter(char *s, char c);

int main()
{
	char word[50];
	char letter;
	char *result;

	printf("\nEnter a word or sentence: \n");
	fgets(word, 50, stdin);
	printf("\nEnter letter to search for: \n");
	letter = getchar();
	
	/*intf("%s", check_letter(word, letter));*/
	result = check_letter(word, letter);
	printf("%s", result);
	
	
	return (0);
}

/**
 * check_letter - check if given letter is present
 *
 * @s: string to check from
 * @c: character to check
 *
 * Return: letter if found, 0 otherwise
 */

char *check_letter(char *s, char c)
{
	int i;
	int flag = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == c)
		{
			flag = 1;
			break;
		}
		
	}

	if (flag != 0)
	{
		return ("Found!\n");
	}
	else
	{
		return ("Not found!\n");
	}
}
