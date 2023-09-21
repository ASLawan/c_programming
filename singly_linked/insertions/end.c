#include "main.h"

void insert_at_end(struct node **head, int value)
{
	/*create new node*/
	struct node *new_node;

	/*allocate memory*/
	new_node = (struct node *)malloc(sizeof(struct node));

	/*verify memory allocation*/
	if (new_node == NULL)
	{
		return;
	}
	/*assign value to new_node*/
	new_node->age = value;

	/*create a temp node and traverse node list with it*/
	struct node *temp;

	temp = *head;

	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	/*point next of new node to NULL*/
	new_node->next = NULL;
	
	/*point temp->next to new_node*/

	temp->next = new_node;
	
	printf("successfully added a new node at the end of the linked list\n");	
}
