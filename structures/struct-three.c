#include <stdio.h>

struct cars 
{
	char brand[20];
	char color[20];
	char drive[20];
	int year;
};

void main()
{
	int i;
	
	printf("\nThis program allows you to create an array of cars structure objects\n");
	printf("\nEnter your info as such(brand color drive year): \n");

	struct cars c[5];

	for (i = 0; i < 5; i++)
	{
		scanf("%s %s %s %d", c[i].brand, c[i].color, c[i].drive, &c[i].year);
	}
	
	for (i = 0; i < 5; i++)
	{
		printf("Make: %s, Color: %s, Transmission: %s, Year: %d\n", c[i].brand, c[i].color, c[i].drive, c[i].year);
	}

}
