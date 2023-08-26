#include <stdio.h>

double calculateBMI(double weight, double height);
void classifyBMI(double BMI);

int main(void)
{
	double weight, height, BMI;

	printf("This program calculates your Body Mass Index (BMI)\n");
	printf("Enter your weight: ");
	scanf("%lf", &weight);
	printf("Enter your height: ");
	scanf("%lf", &height);

	BMI = calculateBMI(weight, height);
	classifyBMI(BMI);
	return (0);
}

double calculateBMI(double weight, double height)
{
	return weight / (height * height);
}

void classifyBMI(double BMI)
{
	int category = 0;

	if (BMI < 18.5)
	{
		category = 1;	
	}
	else if (BMI < 24.9)
	{
		category = 2;
	}
	else if (BMI < 29.9)
	{
		category = 3;
	}
	else
	{
		category = 4;
	}

	switch (category)
	{
		case 1:
			printf("\nYour BMI is: %.2lf. You're UNDERWEIGHT!\n", BMI);
			break;
		case 2:
			printf("\nYour BMI is: %.2lf. Your weight is NORMAL!\n", BMI);
			break;
		case 3:
			printf("\nYour BMI is: %.2lf, You're OVERWEIGHT!\n", BMI);
			break;
		case 4:
			printf("\nYour BMI is: %.2lf, You're OBESE!\n", BMI);
	}
}
