/*
OVERVIEW:  Given a number convert that to single linked list (each digit as a node).
E.g.: Input: 234, Output: 2->3->4.

INPUTS:  A number.

OUTPUT: Create linked list from given number, each digit as a node.

ERROR CASES: 

NOTES: For negative numbers ignore negative sign.
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int num;
	struct node *next;
};

struct node * numberToLinkedList(int N) {
	if (N < 0){
		N *= -1;
	}
	struct node *head, *current, *temp;
	current = (struct node*)malloc(sizeof(struct node));
	current->num = 0;
	current->next = NULL;
	head = current;
	int x = N;
	int count = 1;
	if (N != 0){
		while (x > 0){
			x /= 10;
			count *= 10;
		}
		count /= 10;


		x = N;
		while (count > 0){
			temp = (struct node*)malloc(sizeof(struct node));
			temp->num = x / count;
			x %= count;

			temp->next = NULL;
			count /= 10;
			current->next = temp;
			current = temp;

		}
		current = head->next; 
			
		
	}
	else{
		temp = (struct node*)malloc(sizeof(struct node));
		temp->num = x;
		temp->next = NULL;
		count /= 10;
		current->next = temp;
		current = temp;
		current = head->next;
	}
	return current;

}