// CIRCULAR QUEUES USING ARRAY
#include <stdio.h>
#define size 5
int queue[size], rear = -1, front = -1; // global variables
void insert(int ele) {
  if ((rear == size - 1 && front == 0) || (front - 1 == rear))
    printf("Queue is full");
  else if (front == -1 && rear == -1) {
    rear = front = 0;
    queue[rear] = ele;
  } else {
    rear = (rear + 1) % size;
    queue[rear] = ele;
  }
}
int delet() {
  int d;
  if (front == -1 && rear == -1)
    printf("Queue is Empty");
  else if (front == rear) {
    d = queue[front];
    front = rear = -1;
    return d;
  } else {
    d = queue[front];
    front = (front + 1) % size;
    return d;
  }
}
void display() {
  int i, j;
  if (front <= rear) {
    for (i = front; i <= rear; i++)
      printf("%d ", queue[i]);
  } else {
    for (i = 0; i <= rear; i++)
      printf("%d ", queue[i]);
    for (j = front; j < size; j++)
      printf("%d ", queue[j]);
  }
}
void min() {
  int i, j, min = queue[front];
  if (front <= rear) {
    for (i = front; i <= rear; i++) {
      if (queue[i] < min)
        min = queue[i];
    }
  } else {
    for (i = 0; i <= rear; i++) {
      if (queue[i] < min)
        min = queue[i];
    }
    for (j = front; j < size; j++) {
      if (queue[j] < min)
        min = queue[j];
    }
  }
  printf("The minimum element in the queue is %d", min);
}
void max() {
  int i, j, max = 0;
  if (front <= rear) {
    for (i = front; i <= rear; i++) {
      if (queue[i] > max)
        max = queue[i];
    }
  } else {
    for (i = 0; i <= rear; i++) {
      if (queue[i] > max)
        max = queue[i];
    }
    for (j = front; j < size; j++) {
      if (queue[j] > max)
        max = queue[j];
    }
  }
  printf("The maximum element in the queue is %d", max);
}
int main() {
  int ele, ch, cont;
  printf("Enter 1.insert\n2.delete\n3.display all elements\n4.Minimum element "
         "in the queue\n5.Maximum element in the queue\n");
  do {
    printf("Enter your choice: ");
    scanf("%d", &ch);
    switch (ch) {
    case 1:
      printf("enter the element: ");
      scanf("%d", &ele);
      insert(ele);
      break;
    case 2:
      printf("the deleted element is %d", delet());
      break;
    case 3:
      display();
      break;
    case 4:
      min();
      break;
    case 5:
      max();
      break;
    default:
      printf("Enter the number between 1-3");
    }
    printf("\nEnter 1 to continue 0 to exit");
    scanf("%d", &cont);
  } while (cont == 1);
}
