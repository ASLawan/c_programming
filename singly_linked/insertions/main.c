#include "main.h"

int main(void)
{
	/*declare the structs*/
	struct node *nodeA;
	struct node *nodeB;
	struct node *nodeC;
	struct node *head;

	/*allocate memory*/
	nodeA = (struct node *)malloc(sizeof(struct node));
	nodeB = (struct node *)malloc(sizeof(struct node));
	nodeC = (struct node *)malloc(sizeof(struct node));

	/*assign values to nodes*/
	nodeA->age = 33;
	nodeB->age = 23;
	nodeC->age = 43;

	/*assign addresses*/
	nodeA->next = nodeB;
	nodeB->next = nodeC;
	nodeC->next = NULL;

	/*create a head*/
	head = nodeA;

	/*display results*/

	/*insert new node at beginning*/
	/*sert_at_begin(&head, 78);*/

	/*insert new node at the end*/
	/*nsert_at_end(&head, 78);*/

	/*insert new node at given position*/
	/*insert_at_position(&head, 78, 2);*/

	/*insert new node before given position*/
	insert_before_position(&head, 78, 2);

	/*create temporal node*/
	struct node *temp;

	temp = head;

	/*display nodes*/
	while (temp != NULL)
	{
		printf("%d ---> ", temp->age);
		temp = temp->next;
	}
	printf("\n");
}
