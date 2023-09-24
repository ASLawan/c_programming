#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num, i, *ptr, sum = 0;
	
	printf("\t\nThis program sums n-number of integers\n");
	printf("Enter the number of numbers: \n");
	scanf("%d", &num);
	
	/*allocate memory*/
	ptr = (int *)calloc(num, sizeof(int));

	/*verify if mempry is allocated*/
	if (ptr == NULL)
	{
		printf("Error! memory was not allocated\n");
		exit(0);
	}

	printf("Enter the elements: \n");
	for(i = 0; i < num; i++)
	{
		scanf("%d", ptr + i);
		sum += *(ptr + i);
	}

	for (i = 0; i < num; i++)
	{
		printf("%d ", *(ptr + i));
	}
	printf("\nThe sum of the above numbers is: %d\n", sum);
	
	/*free allocated memory*/
	free(ptr);

	return (0);

}
