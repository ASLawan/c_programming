#include <stdio.h>

int main(void)
{
	char s1[30], s2[12];
	int i = 0, j = 0, k, m = 0, n = 0, l1b = 0, l2b = 0, l1a = 0, l2a = 0;

	printf("Enter string one: ");
	scanf("%s", s1);
	printf("Enter string two: ");
	scanf("%s", s2);
	
	while (s1[i] != '\0')
	{
		l1b++;
		i++;
	}
	while (s2[j] != '\0')
	{
		l2b++;
		j++;
	}
	printf("Before concatenation: \n");
	printf("String one: %s\n", s1);
	printf("String two: %s\n", s2);
	printf("Length of string one: %d\n", l1b);
	printf("Length of string two: %d\n", l2b);
	for (k = 0; k <= l2b; k++)
	{
		s1[l1b + k] = s2[k];
	}
	
	while (s1[m] != '\0')
	{
		l1a++;
		m++;
	}
	while (s2[n] != '\0')
	{
		l2a++;
		n++;
	}

	printf("\nAfter concatenation: \n");
	printf("String one: %s\n", s1);
	printf("String two: %s\n", s2);
	printf("Length of string one: %d\n", l1a);
	printf("Length of string two: %d\n", l2a);
	
	return (0);
}
