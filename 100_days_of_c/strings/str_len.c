#include <stdio.h>
#include <string.h>

int main(void)
{
	int count = 0, i = 0;
	char name[20];

	printf("Enter your name: ");
	scanf("%s", name);

	while (name[i] != '\0')
	{
		count++;
		i++;
	}

	printf("Your name: %s\n", name);
	printf("Length of name: %d\n", count);
	printf("\nLength with strlen is: %ld\n", strlen(name));
	
	return (0);
}
