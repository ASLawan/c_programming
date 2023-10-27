#include <stdio.h>

int main(void)
{
	int i = 0, j, len = 0;
	char s[15], ch;

	printf("Enter string to reverse: ");
	scanf("%s", s);
	
	printf("String: %s\n", s);
	while (s[i])
	{
		len++;
		i++;
	}

	for (i = 0, j = len - 1; i < j; i++, j--)
	{
		ch = s[i];
		s[i] = s[j];
		s[j] = ch;
	}
	printf("Reversed string: %s\n", s);

	return (0);
}
