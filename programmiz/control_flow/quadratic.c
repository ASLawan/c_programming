#include <math.h>
#include <stdio.h>

int main(void)
{
	double a, b, c, discriminant, root1, root2, real, imag;
	printf("\tThis program computes the roots of a quadratic equation\n");
	printf("\nEnter the coefficients of a, b and c: ");
	scanf("%lf %lf %lf", &a, &b, &c);
	printf("a = %.2lf, b = %.2lf, c = %.2lf\n", a, b, c);

	/*calculate discrminant*/
	discriminant = b * b - 4 * a * c;

	/*Real and different roots*/
	if (discriminant > 0)
	{
		root1 = (-b + sqrt(discriminant)) / (2 * a);
		root2 = (-b - sqrt(discriminant)) / (2 * a);
		printf("root1: = %.2lf and root2: %.2lf\n", root1, root2);
	}

	/*Real and equal roots*/
	else if (discriminant == 0)
	{
		root1 = root2 = -b / (2 * a);
		printf("root1 = root2 = %.2lf\n", root1);
	}

	/*complex roots*/
	else
	{
		real = -b / (2 * a);
		imag = sqrt(-discriminant) / (2 * a);
		printf("root1 = %.2lf + %.2lfi, root2 = %.2lf + %.lfi\n", real, imag, real, imag);
	}
}
