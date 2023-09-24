#include <stdio.h>

int main(void)
{
	int i, x[6], sum = 0;

	/*assign values to the aray*/
	printf("Enter six numbers: ");
	for (i = 0; i < 6; i++)
	{
		scanf("%d", x + i);
		/*same as scanf("%d", &X[i])*/
		
		sum += *(x + i);
		/*same as sum += X[i]*/
	}

	/*printing the values*/
	for(i = 0; i < 6; i++)
	{
		printf("x[%d]: %d\n", i, *(x + i));
	}
	printf("The sum of the printed values is: %d\n", sum);	
}
