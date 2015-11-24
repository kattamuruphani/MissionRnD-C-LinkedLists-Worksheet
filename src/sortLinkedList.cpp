/*
OVERVIEW: Given an unsorted single linked list, sort the linked list without using extra array or linked list.
E.g.: 4->2->1->5->3, output is 1->2->3->4->5.

INPUTS: An unsorted single linked list.

OUTPUT: Sort the linked list.

ERROR CASES: Return NULL for error cases.

NOTES: Without using extra array or linked list.
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

struct node * sortLinkedList(struct node *head) {
	int num[10], i;
	struct node *temp, *current1, *current2;
	if (head == NULL){
		return NULL;
	}
	for (current1 = head; current1 != NULL; current1 = current1->next){
		for (current2 = current1->next; current2 != NULL; current2 = current2->next){
			if (current1->num > current2->num){
				i = current1->num;
				current1->num = current2->num;
				current2->num = i;
			}
		}
	}
	
	return head;
}