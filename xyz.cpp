#include <iostream>
using namespace std;

class Node {

public:
  int data;
  Node *link;

  Node(int data) {
    this->data = data;
    this->link = NULL;
  }
};

void insertAtEnd(Node *&tail, int d) { // tail already given
  Node *temp = new Node(d);
  tail->link = temp;
  tail = temp;
}

void insertAtHead(Node *&head, int d) {
  Node *temp = new Node(d);
  temp->link = head;
  head = temp;
}

void insertAtPosition(Node *&tail, Node *&head, int position, int d) {
  // 1st Node insertion
  if (position == 1) {
    insertAtHead(head, d);
    return;
  }
  Node *temp = head;
  int count = 1;

  while (count < position - 1) {
    temp = temp->link;
    count++;
  }

  // Check for Last Node
  if (temp != NULL) {
    insertAtEnd(tail, d);
    return;
  }

  Node *t = new Node(d);
  t->link = temp->link;
  temp->link = t;
}

void printList(Node *&head) {
  if (head == NULL) {
    cout << "Empty List !" << endl;
    return;
  }
  Node *temp = head;
  while (temp != NULL) {
    cout << temp->data << " ";
    temp = temp->link;
  }
  cout << endl;
}

int main() {

  Node *node1 = new Node(10);
  Node *head = node1;
  Node *tail = node1;

  insertAtEnd(tail, 3);

  insertAtHead(head, 5);

  printList(tail);

  insertAtEnd(tail, 12);

  insertAtPosition(tail, head, 2, 20);

  printList(head);

  cout << "Head : " << head->data << endl;
  cout << "Tail : " << tail->data << endl;

  return 0;
}
