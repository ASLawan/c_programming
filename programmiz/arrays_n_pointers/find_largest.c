#include <stdio.h>

int main(void)
{
	int num, i;
	double arr[50];

	printf("\t\nThis program finds the largest number in a list\n");
	printf("Enter the number of elements: \n");
	scanf("%d", &num);

	for (i = 0; i < num; i++)
	{
		printf("Enter number %d: ", i + 1);
		scanf("%lf", &arr[i]);
	}
	
	printf("The array elements are: \n");
	for (i = 0; i < num; i++)
	{
		printf("%.2lf ", arr[i]);
	}

	for (i = 0; i < num; i++)
	{
		if (arr[0] < arr[i])
		{
			arr[0] = arr[i];
		}
	}


	printf("\nThe largest number in the list is: %.2lf\n", arr[0]);

	return (0);
}
