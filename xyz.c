#include <stdio.h>
#include <stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *head = NULL;
void insertNode(struct node **s, int value){ //
	struct node *new, *temp;
	new = (struct node *)malloc(12);
	new -> data = value;
	new -> new = NULL;
	if (*s == NULL){ // emply list
		*s = new;
	}
	else { // existing list
		temp = *s // temp is pointing to node whose address is in start
		while ( temp -> next != NULL ){ // make temp node move to second last node
			temp = temp -> next;
		}
		temp -> next = new;
	}
}
void userInsert(){
	struct node *temp, *new;
	int inp, choice;
	do {
		new = (struct node *)malloc(12);
		printf("Enter data : ");
		scanf("%d", &inp);
		new -> data = inp;
		new -> next = NULL;
		if (head == NULL){  // empty list (only head is present initially)
			head = new;  // assigning address of new node to starting/head node
			temp = head; // temp just track the 1st node (that is after head node)
		}
		else { // already existing nodes 
			temp -> next = new;  // previos node (i,e,. temp) storing address of new (new node)
			temp = temp -> next; // pointing to last node (i,e. new)
		}
		printf("Press 1 to continue, 0 to stop : ");
		scanf("%d", &choice);
	} 
	while (choice != 0);
}
int main(){
	struct node *start = NULL;
	insertNode(&start, 24);
	userInsert();
	return 0;
}