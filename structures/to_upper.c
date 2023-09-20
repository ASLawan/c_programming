#include <stdio.h>
#include <string.h>

char *to_upper(char s[]);

void main(void)
{
	char word[12];

	printf("Enter a word to conver to uppercase: \n");
	scanf("%s", word);

	to_upper(word);
	printf("Your word in uppercase is %s\n", word);

}

char *to_upper(char s[])
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
}
