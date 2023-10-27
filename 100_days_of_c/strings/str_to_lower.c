#include <stdio.h>

int main(void)
{
	int i;
	char s[20];

	printf("Enter sstring to convert: ");
	scanf("%s", s);
	printf("String: %s\n", s);
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
		{
			s[i] = s[i] + 32;
		}
	}

	printf("New String: %s\n", s);

	return (0);
}
