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
	struct cars c1 = {"Toyota", "Gray", "Manual", 2019};
	struct cars c2 = {"Nissan", "White", "Automatic", 2020};
	struct cars c3 = {"Mercedes", "Black", "Manual", 2021};
	struct cars c4 = {"BMW", "Navy", "Automatic", 2022};
	struct cars c5 = {"Hyundai", "Silver", "Automatic", 2023};

	printf("\nInformation for car 1: \n");
	printf("Brand: %s, Color: %s, Transmission: %s, Year: %d\n", c1.brand, c1.color, c1.drive, c1.year);
	printf("\nInformation for car 2: \n");
	printf("Brand: %s, Color: %s, Transmission: %s, Year: %d\n", c2.brand, c2.color, c2.drive, c2.year);
	printf("\nInformation for car 3: \n");
	printf("Brand: %s, Color: %s, Transmission: %s, Year: %d\n", c3.brand, c3.color, c3.drive, c3.year);
	printf("\nInformation for car 4: \n");
	printf("Brand: %s, Color: %s, Transmission: %s, Year: %d\n", c4.brand, c4.color, c4.drive, c4.year);
	printf("\nInformation for car 5: \n");
	printf("Brand: %s, Color: %s, Transmission: %s, Year: %d\n", c5.brand, c5.color, c5.drive, c5.year);
}
