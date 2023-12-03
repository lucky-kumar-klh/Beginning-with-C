#include <stdio.h>
#include <stdlib.h>

struct node{	
	int data;
	struct node *link;
};
struct node *head = NULL;
void create(){
	struct node *t, *temp;
	int choice, x;
	do {
		// allocate memory
		t = (struct node *)malloc(sizeof(struct node));
		t -> link = NULL;
		printf("Enter data : ");
		scanf("%d", &x);
		t -> data = x;
		if (head == NULL){
			head = t;
			temp = head;
		}
		else {
			temp -> link = t;
			temp = temp -> link;
		}
		printf("Press 1 to add data, 0 to exit : ");
		scanf("%d", &choice);
	} 
	while (choice != 0);
}
void display(){
	struct node *temp;
	temp = head;
	printf("\nElements => ");
	while (temp != NULL){
		printf("%d ", temp -> data);
		temp = temp -> link;
	}
	printf("\n");
}
void sum (){
  struct node *temp = head;
  float sum = 0, count = 0;
  while (temp != NULL){
    sum += temp->data;
    count++;
    temp = temp->link;
  }
  float avg = sum/count;  
  printf("\nSum = %.0f, Total Elements = %.0f, Avg = %.2f\n", sum, count, avg);
}
void max_min (){
  struct node *temp = head;
  int max = -99999, min = 999999;
  while (temp != NULL){
    if (temp->data > max){
      max = temp->data;
    }
    if (temp->data < min){
      min = temp->data;
    }
    temp = temp->link;
  } 
  printf("\nMaximum element = %d\nMinimum element = %d\n", max, min);
}

int main(){
  create();
	display();
	sum();
	max_min();
  return 0;
}