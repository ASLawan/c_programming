#include "main.h"

void insert_at_begin(struct node **head, int value)
{
	/*create a node*/
	struct node *new_node;

	/*allocate memory*/
	new_node = (struct node *)malloc(sizeof(struct node));

	/*assign value to new_node*/
	new_node->age = value;
	
	/*check if list exist*/
	if (*head == NULL)
	{
		new_node->next = NULL;
	}
	else
	{
		/*point next of new_node to what head was pointing to*/
		new_node->next = *head;
	}

	/*redirect head to point to new_node*/
	*head = new_node;
	printf("Successfully added new node at the begining of the list\n");


}
