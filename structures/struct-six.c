#include <stdio.h>
#include <stdlib.h>

struct Cars
{
	char *brand;
	char *color;
	char *drive;
	int year;
};

struct Cars *new_car(char *brand, char *color, char *drive, int year)
{
	struct Cars *car;

	car = malloc(sizeof(struct Cars));
	if (car == NULL)
	{
		return (NULL);
	}
	else
	{
		car->brand = brand;
		car->color = color;
		car->drive = drive;
		car->year = year;
	}

	return (car);
}

int main(void)
{
	struct Cars *car;

	car = new_car("Toyota", "Black", "Automatic", 2023);
	if (car == NULL)
	{
		return (1);
	}
	else
	{
		printf("\nYour car information: \n");
		printf("\nMake: %s\n", car->brand);
		printf("Color: %s\n", car->color);
		printf("Transmission: %s\n", car->drive);
		printf("Year: %d\n", car->year);
	}
	return (0);
}
