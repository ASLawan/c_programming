#include "main.h"

void insert_at_position(struct node **head, int value, int position)
{
	int i;

	/*create a new node*/
	struct node *new_node;

	/*allocate memory to the node*/
	new_node = (struct node *)malloc(sizeof(struct node));

	/*verify allocated memory*/
	if (new_node == NULL)
	{
		return;
	}

	/*assign value to new node*/
	new_node->age = value;

	/*create temporal node and use to traverse list to target position*/
	struct node *temp;

	temp = *head;

	for (i = 1; i < position; i++)
	{
		temp = temp->next;
	}

	/*point next of new_node to node next to target*/
	new_node->next = temp->next;

	/*point target node to new_node*/
	temp->next = new_node;

	printf("Successfully added new node after node %d\n", position);
}
