#include <stdio.h>

#define VALUE 7
#define add(a, b) a + b
int main(void)
{
	printf("My favorite number is: %d\n", VALUE);
	printf("Today's date is: %s\n", __DATE__);
	printf("The time is: %s\n", __TIME__);
	printf("The sum of %d and %d is: %d\n", 3, 4, add(3, 4));
	return (0);

}
