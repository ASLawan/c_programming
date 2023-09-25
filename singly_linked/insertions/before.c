#include "main.h"

void insert_before_position(struct node **head, int value, int position)
{
	int i;

	/*create new node*/
	struct node *new_node;

	/*allocate memory to the node*/
	new_node = (struct node *)malloc(sizeof(struct node));

	/*verify allocated memory*/
	if (new_node == NULL)
	{
		return;
	}

	/*assign value to node*/
	new_node->age = value;

	/*create temporal node and use to traverse list*/
	struct node *temp;

	temp = *head;

	for (i = 1; i < position; i++)
	{
		temp = temp->next;
	}
	
	/*point new node to position*/
	new_node->next = temp;

	/*point the node that was pointing to position, to new_node*/
	temp->next = new_node;
	
	printf("Successfully added new node before node at position %d\n", position);	
}
