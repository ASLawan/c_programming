#include <stdio.h>
#include <stdlib.h>

/*template for our nodes*/
struct node 
{
	int age;
	struct node *next;
};

int main(void)
{
	/*declare node*/
	struct node *nodeA, *nodeB, *nodeC;
	struct node *head;

	/*allocate memory for the nodes*/
	nodeA = (struct node *) malloc(sizeof(struct node));
	nodeB = (struct node *) malloc(sizeof(struct node));
	nodeC = (struct node *) malloc(sizeof(struct node));

	/*assign data values to the nodes*/
	nodeA->age = 30;
	nodeB->age = 31;
	nodeC->age = 32;

	/*assign address values to the nodes*/
	nodeA->next = nodeB;
	nodeB->next = nodeC;
	nodeC->next = NULL;

	/*create a head*/
	head = nodeA;

	/*create a temporal pointer*/
	struct node *temp;

	temp = head;
	/*traversing the linked list*/
	while (temp->next != NULL)
	{
		printf("%d --->", temp->age);
		temp = temp->next;
	}
	printf("%d --->\n", temp->age);

}
