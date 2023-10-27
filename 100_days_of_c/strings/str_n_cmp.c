#include <stdio.h>

int main(void)
{
	char s1[15], s2[15];
	int i = 0, flag = 0, num_chars, cpy;

	printf("Enter first string: ");
	scanf("%s", s1);
	printf("Enter second string: ");
	scanf("%s", s2);
	printf("Enter number of characters to compare: ");
	scanf("%d", &num_chars);
	cpy = num_chars;
	while (num_chars)
	{
		for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
		{
			if (s1[i] != s2[i])
			{
				flag = 1;
				break;
			}
		}
		num_chars--;
	}

	if (flag == 1)
	{
		printf("For the first %d characters, the two strings are not same!\n", cpy);
	}
	else
	{
		printf("For the first %d characters, the two strings are the same!\n", cpy);
	}

	return (0);
}
