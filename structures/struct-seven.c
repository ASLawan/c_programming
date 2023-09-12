#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*defining template structure*/
struct Cars 
{
	char brand[20];
	char color[20];
	char drive[20];
	char engine[20];
	int year;
};

int main(void)
{
	/*declaring structs*/
	struct Cars c1;
	struct Cars c2;
	struct Cars c3;
	struct Cars c4;
	struct Cars c5;

	/*assigning values*/
	strcpy(c1.brand, "Toyota");
	strcpy(c1.color, "Black");
	strcpy(c1.drive, "Automatic");
	strcpy(c1.engine, "Diesel");
	c1.year = 2019;

	strcpy(c2.brand, "Mercedes");
	strcpy(c2.color, "White");
	strcpy(c2.drive, "Automatic");
	strcpy(c2.engine, "Diesel");
	c2.year = 2020;

	strcpy(c3.brand, "Nissan");
	strcpy(c3.color, "Silver");
	strcpy(c3.drive, "Manual");
	strcpy(c3.engine, "Petrol");
	c3.year = 2021;	
	
	strcpy(c4.brand, "Hyundai");
	strcpy(c4.color, "Forest-Green");
	strcpy(c4.drive, "Manual");
	strcpy(c4.engine, "Petrol");
	c4.year = 2022;	
	
	strcpy(c5.brand, "VolksWagen");
	strcpy(c5.color, "Gray");
	strcpy(c5.drive, "Automatic");
	strcpy(c5.engine, "Diesel");
	c5.year = 2023;

	/*display car information when brand name is provided*/
	char name[20];

	printf("\nWhat car are you interested in?\n");
	scanf("%s", name);
	printf("\nHere is the information for '%s':\n", name);

	if (strcmp(c1.brand, name) == 0)
	{
		printf("Make : %s\n", c1.brand);
		printf("Color: %s\n", c1.color);
		printf("Transmission: %s\n", c1.drive);
		printf("Engine: %s\n", c1.engine);
		printf("Year  : %d\n", c1.year);	
	}
	else if (strcmp(c2.brand, name) == 0)
	{
		printf("Make : %s\n", c2.brand);
		printf("Color: %s\n", c2.color);
		printf("Transmission: %s\n", c2.drive);
		printf("Engine: %s\n", c2.engine);
		printf("Year  : %d\n", c2.year);
	}
	else if (strcmp(c3.brand, name) == 0)
	{
		printf("Make : %s\n", c3.brand);
		printf("Color: %s\n", c3.color);
		printf("Transmission: %s\n", c3.drive);
		printf("Engine: %s\n", c3.engine);
		printf("Year  : %d\n", c3.year);
	}
	else if (strcmp(c4.brand, name) == 0)
	{
		printf("Make : %s\n", c4.brand);
		printf("Color: %s\n", c4.color);
		printf("Transmission: %s\n", c4.drive);
		printf("Engine: %s\n", c4.engine);
		printf("Year  : %d\n", c4.year);
	}	
	else if (strcmp(c5.brand, name) == 0)
	{
		printf("Make : %s\n", c5.brand);
		printf("Color: %s\n", c5.color);
		printf("Transmission: %s\n", c5.drive);
		printf("Engine: %s\n", c5.engine);
		printf("Year  : %d\n", c5.year);
	}
	else
	{
		printf("Sorry! We don'f have information for this car '%s'\n", name);
	}	
}
