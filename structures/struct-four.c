#include <stdio.h>

struct cars
{
	char brand[20];
	char color[15];
	char drive[15];
	int year;
};

void main()
{
	struct cars c1 = {"Hyundai", "Black", "Automatic", 2023};

	struct cars *ptr = &c1;

	printf("\nCar one infor: \n");
	printf("\nMake: %s, Color: %s, Transmission: %s, Year: %d\n", ptr->brand, ptr->color, ptr->drive, (*ptr).year);
}
