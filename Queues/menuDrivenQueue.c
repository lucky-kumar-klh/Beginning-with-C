#include <stdio.h>
#include <stdbool.h>

int start = -1, end = -1;
int arr[50];

void enqueue(){
	int data;
	if (start == -1) {  // empty queue
		start = 0, end = 0;
		printf("Enqueue data : ");
		scanf("%d", &data);
		arr[start] = data;
		printf("%d Enqueued !\n\n", data);
	}
	else if (start == 50) {  // full queue
		printf("Queue-Overflow\n\n");
	}
	else {  // normal
		start++;
		printf("Enqueue data : ");
		scanf("%d", &data);
		arr[start] = data;
		printf("%d Enqueued !\n\n", data);
	}
}

void dequeue(){
	if (start == -1){  // empty queue
		printf("Empty Queue !\n\n");
	}
	else if(start == end){  // only one element is left 
	  printf("%d Dequeued\n\n", arr[start]);
		start = -1;
		end = -1;
	}
	else {  // normal case
		printf("%d Dequeued\n\n", arr[end]);
		end++;
	}
}

void display(){
  if (start == -1){  // empty queue
		printf("Empty Queue\n\n");
	}
	else {
		printf("\nYour queue : ");
		for (int i = end; i <= start; i++){
			printf("%d ", arr[i]);
		}
		printf("\n\n");
	} 
}

void showMenu(int *choice){
	printf("1. EnQueue\n2. DeQueue\n3. Exit\nChoose one : ");
	scanf("%d", choice);
}

int main(){
	int choice;
	bool run = true;
	printf("1. EnQueue\n2. DeQueue\n3. Exit\nChoose one : ");
	scanf("%d", &choice);

	while (run){

		switch (choice){
			case 1:
				enqueue();
				showMenu(&choice);
				break;
			case 2:
				dequeue();
				showMenu(&choice);
				break;
			case 3:
				display();
				run = false;
				break;
			default:
				printf("Invalid Choice");
				break;
				showMenu(&choice);
		}
	}
  return 0;
}