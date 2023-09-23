#include <stdio.h>

void reverse_str();

int main(void)
{
	printf("Enter a sentence: \n");
	reverse_str();
	
	printf("\n");
	return (0);
}

void reverse_str()
{
	char c;

	scanf("%c", &c);
	if (c != '\n')
	{
		reverse_str();
		printf("%c", c);
	}

}
