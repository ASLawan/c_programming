#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>

/************* struct *************/
struct node
{
	int age;
	struct node *next;
};
/*********** function prototypes ************/
void insert_at_begin(struct node **head, int value);
void insert_at_end(struct node **head, int value);
void insert_at_position(struct node **head, int value, int position);
void insert_before_position(struct node **head, int value, int position);

#endif
