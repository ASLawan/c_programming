#include <stdio.h>

/**/
void printStr(char* s);

int main(void)
{
	char course[20] = "Software Engineering";
	printStr(course);
}

void printStr(char* s)
{
	int i;
	i = 0;

	while (*(s + i) != '\0')
	{
		printf("%c", *(s + i));
		i++;
	}
	printf("\n");
}
