#include <stdio.h>

void rot13Cipher(char *str);

int main(void)
{
	char text[100];

	printf("This converts PLAINTEXT to CIPHEREDTEXT with rot13\n");
	printf("Enter text to cipher: ");
	fgets(text,100, stdin);

	rot13Cipher(text);

	printf("%s\n", text);
	return (0);
}

void rot13Cipher(char *str)
{
	int i;
	int rot13 = 13;

	for(i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if ((str[i] + rot13) <= 122)
			{
				str[i] = str[i] + rot13;
			}
			else
			{
				str[i] = str[i] - rot13;
			}
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			if ((str[i] + rot13) <= 97)
			{
				str[i] = str[i] + rot13;
			}
			else
			{
				str[i] = str[i] - rot13;
			}

		}
		else
		{
			str[i] = str[i];
		}
	}
}
