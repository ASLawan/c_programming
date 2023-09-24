#include <stdio.h>
#include <math.h>

float calculateSD(float data[]);

int main(void)
{
	int i;
	float data[10];

	printf("Enter the elements: \n");
	for (i = 0; i < 10; i++)
	{
		scanf("%f", &data[i]);
	}

	printf("The entered numbers are: \n");
	for(i = 0; i < 10; i++)
	{
		printf("%.2f ", data[i]);
	}
	printf("\nTheir standard deviation is: %.2f\n", calculateSD(data));

	return (0);
}

float calculateSD(float data[])
{
	float sum = 0.0, SD = 0.0, mean;
	int i;

	for(i = 0; i < 10; i++)
	{
		sum += data[i];
	}

	mean = sum / 10;

	for (i = 0; i < 10; i++)
	{
		SD += pow(data[i] -  mean, 2);
	}

	return (sqrt(SD / 10));
}
