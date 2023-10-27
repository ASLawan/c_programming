#include <stdio.h>

int main(void)
{
	char s1[15], s2[15];
	int i = 0, flag = 0;

	printf("Enter first string: ");
	scanf("%s", s1);
	printf("Enter second string: ");
	scanf("%s", s2);

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			flag = 1;
			break;
		}
	}

	if (flag == 1)
	{
		printf("The two strings are not same!\n");
	}
	else
	{
		printf("The two strings are the same!\n");
	}
}
