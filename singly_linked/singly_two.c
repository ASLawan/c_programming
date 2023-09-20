#include <stdio.h>
#include <stdlib.h>

/*declare struct*/
struct node
{
	int year;
	struct node *next;
};

int main(void)
{
	/*declare nodes*/
	struct node *first;
	struct node *second;
	struct node *third;
	struct node *fourth;
	struct node *fifth;
	struct node *head;

	/*allocate memory to declared nodes*/
	first = (struct node *)malloc(sizeof(struct node));
	second = (struct node *)malloc(sizeof(struct node));
	third = (struct node *)malloc(sizeof(struct node));
	fourth = (struct node *)malloc(sizeof(struct node));
	fifth = (struct node *)malloc(sizeof(struct node));

	/*assign values to declared nodes*/
	first->year = 2018;
	second->year = 2019;
	third->year = 2020;
	fourth->year = 2021;
	fifth->year = 2022;

	/*assign addresses*/
	first->next = second;
	second->next = third;
	third->next = fourth;
	fourth->next = fifth;
	fifth->next  = NULL;

	/*create head*/
	head = first;

	/*create temporal node*/
	struct node *ptr;

	/*assign head to temporal node*/
	ptr = head;
	
	/*display nodes*/
	printf("Linked list elements are: \n");
	while (ptr->next != NULL)
	{
		printf("%d --->", ptr->year);
		ptr = ptr->next;
	}
	printf("%d --->\n", ptr->year);
	return (0);
}
