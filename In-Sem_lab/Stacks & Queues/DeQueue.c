#include <stdio.h>
#define size 5
int queue[size], rear = -1, front = -1;
void insert_at_front(int ele) {
  if ((front == 0 && rear == size - 1) || front - 1 == rear)
    printf("Queue is Full\n");
  else if (front == -1 && rear == -1) {
    front = rear = 0;
    queue[front] = ele;
  } else if (front == 0) { // Insert at begin but element is already is there
    front = size - 1;
    queue[front] = ele;
  } else {
    front = front - 1;
    queue[front] = ele;
  }
}

void insert_at_rear(int ele) {
  if ((rear == size - 1 && front == 0) || (front == rear + 1))
    printf("Queue is full");
  else if (front == -1 && rear == -1) {
    front = rear = 0;
    queue[rear] = ele;
  } else if (rear == size - 1) {
    rear = 0;
    queue[rear] = ele;
  } else {
    rear = rear + 1;
    queue[rear] = ele;
  }
}

void delet_at_front() {
  if (front == -1 && rear == -1)
    printf("Queue is Empty\n");
  else if (front == rear) {
    printf("Element deleted is %d", queue[front]);
    front = rear = -1;
  } else if (front == size - 1) {
    printf("Element deleted is %d", queue[front]);
    front = 0;
  } else {
    printf("Element deleted is %d", queue[front]);
    front = front + 1;
  }
}

void delet_at_rear() {
  if (front == -1 && rear == -1)
    printf("Queue is empty\n");
  else if (front == rear) {
    printf("Element deleted is %d", queue[rear]);
    front = rear = -1;
  } else if (rear == 0) {
    printf("Element deleted is %d", queue[rear]);
    rear = size - 1;
  } else {
    printf("Element deleted is %d", queue[rear]);
    rear = rear - 1;
  }
}

void display() {
  int i = front;
  while (i != rear) {
    printf("%d ", queue[i]);
    i = (i + 1) % size;
  }
  printf("%d ", queue[rear]);
}

void getFrontElement() { printf("Front position element: %d", queue[front]); }

void getRearElement() { printf("Rear position element: %d", queue[rear]); }

int main() {
  int choice, ele, cont;
  do {
    printf("1.Insert at front\n2.Insert at rear\n3.Delete at front\n4.Delete "
           "at rear\n5.Display\n6.get front element\n7.get rear element\n");
    scanf("%d", &choice);
    switch (choice) {
    case 1:
      printf("Enter the element: ");
      scanf("%d", &ele);
      insert_at_front(ele);
      break;
    case 2:
      printf("Enter the element: ");
      scanf("%d", &ele);
      insert_at_rear(ele);
      break;
    case 3:
      delet_at_front();
      break;
    case 4:
      delet_at_rear();
      break;
    case 5:
      display();
      break;
    case 6:
      getFrontElement();
      break;
    case 7:
      getRearElement();
      break;
    }
    printf("Enter 1 to continue, 0 to exit: ");
    scanf("%d", &cont);
  } while (cont == 1);
}
