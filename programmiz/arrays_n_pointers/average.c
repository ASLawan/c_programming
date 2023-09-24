#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float *ptr;
	int n, i;
	float sum = 0.0, avg;

	printf("Enter the number of elements: \n");
	scanf("%d", &n);

	ptr = (float *)malloc(n * sizeof(float));

	if (ptr == NULL)
	{
		printf("Error allocating memory.\n");
		exit(0);
	}
	printf("Enter the elements: \n");
	for (i = 0; i < n; i++)
	{
		scanf("%f", ptr + i);
		sum += *(ptr + i);
	}
	avg = sum / n;

	printf("The following numbers were entered: \n");
	for (i = 0; i < n; i++)
	{
		printf("num[%d]: %.2f\n", i, *(ptr + i));
	}
	printf("The average of the entered numbers is: %.2f\n", avg);

	free(ptr);

	return (0);

}
