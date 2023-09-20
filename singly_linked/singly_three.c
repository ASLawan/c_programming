#include <stdio.h>
#include <stdlib.h>

/*function prototypes*/
void display();

/*declare struct*/

struct node
{
	int year;
	struct node *next;
};

int main(void)
{
	/*declare list nodes*/
	struct node *first;
	struct node *second;
	struct node *third;
	struct node *fourth;
	struct node *fifth;

	/*allocate memory to the declared nodes*/
	first = (struct node *) malloc(sizeof(struct node));
	second = (struct node *) malloc(sizeof(struct node));
	third = (struct node *) malloc(sizeof(struct node));
	fourth = (struct node *) malloc(sizeof(struct node));
	fifth = (struct node *) malloc(sizeof(struct node));

	/*assigne values to the nodes*/
	first->year = 2019;
	second->year = 2020;
	third->year = 2021;
	fourth->year = 2022;
	fifth->year = 2023;

	/*assign address to nodes*/
	first->next = second;
	second->next = third;
	third->next = fourth;
	fourth->next = fifth;
	fifth->next = NULL;

	/*display nodes*/
	display(first);

	return (0);
}

void display(struct node *ptr)
{
	printf("Linked list elements incclude: \n");
	while (ptr != NULL)
	{
		printf("%d --->", ptr->year);
		ptr = ptr->next;
	}
	printf("\n");
}

