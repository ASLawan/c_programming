#include <stdio.h>

void change_value(int *num);

int main(void)
{
	int nb;

	nb = 5;
	change_value(&nb);
	printf("%d\n", nb);

	return (0);
}


void change_value(int *num)
{
	*num = 7;
}
