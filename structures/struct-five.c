#include <stdio.h>

struct cars
{
	char brand[20];
	char color[20];
	char drive[15];
	int year;
};

void main()
{
	struct cars c1 = {"Toyota", "Silver", "Manual", 2023};
	struct cars *ptr = &c1;

	printf("\nCar one infor: \n");
	printf("\nMake: %s, Color: %s, Transmission: %s, Year: %d\n", (*ptr).brand, (*ptr).color, (*ptr).drive, (*ptr).year);
}
