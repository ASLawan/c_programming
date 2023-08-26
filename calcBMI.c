#include <stdio.h>

double calculateBMI(double weight, double height);
void classifyBMI(double BMI);

int main(void)
{
	double weight, height, BMI;

	printf("This Program calculates your Body Mass Index (BMI)\n");
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
	if (BMI < 18.5)
	{
		printf("\nYour BMI is: %.2lf. You're UNDERWEIGHT\n", BMI);
	}
	else if (BMI >= 18.5 && BMI <= 24.9)
	{
		printf("\nYour BMI is: %.2lf. Your weight is NORMAL\n", BMI);
	}
	else if (BMI >= 25 && BMI <= 29.9)
	{
		printf("\nYour BMI is: %.2lf. You're OVERWEIGHT\n", BMI);
	}
	else
	{
		printf("\nYour BMI is: %.2lf. You're OBESE!\n", BMI);
	}
}
