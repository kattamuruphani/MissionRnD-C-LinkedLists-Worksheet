/*
OVERVIEW: Given a single linked list, remove every Kth node in the linked list.
E.g.: 1->2->3->4->5 and K 2, output is 1->3->5.

INPUTS: A linked list and Value of K.

OUTPUT: Remove every Kth node in the linked list.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};


struct node * removeEveryKthNode(struct node *head, int K) {
	int count = 0;
	if (K <= 0||K==1)
		return NULL;
	struct node *temp, *current;
	current = head;
	while (current!=NULL){
		if (current->next == NULL)
			break;
		count++;
		if (count == K-1){

			temp = current->next;
			temp = temp->next;
			current->next = temp;
			current = temp;
			count = 0;
			continue;
		}
		current = current->next;

	}
	return head;
}