#include <stdio.h>

int main(void)
{
	int i;
	int flag = 0;
	char c;
	char vowels[] = "aeiouAEIOU";
	
	printf("Enter a letter of the alphabet: \n");
	scanf("%c", &c);

	for ( i = 0; vowels[i] != '\0'; i++)
	{
		if (vowels[i] == c)
		{
			flag = 1;
			break;
		}
	}
	if (flag == 1)
	{
		printf("%c is a vowel.\n", c);
	}
	else
	{
		printf("%c is a consonant\n", c);
	}
}
