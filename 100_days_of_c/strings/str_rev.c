#include <stdio.h>

int main(void)
{
	int ch, i = 0, j, len = 0;
	char s[15];

	printf("Enter string to reverse: ");
	scanf("%s", s);
	printf("\nString: %s\n", s);
	while (s[i] != '\0')
	{
		len++;
		i++;
	}

	for (j = 0; j < (len / 2); j++)
	{
		ch = s[j];
		s[j] = s[len - 1 - j];
		s[len - 1 - j] = ch;
	}

	printf("\nReversed String: %s\n", s);
}
