#include <stdio.h>
#include <stdlib.h>
struct node {
  struct node *left;
  int data;
  struct node *right;
} *root = NULL;

void insert(struct node *temp, struct node *nn);

void create(int c) {
  struct node *newnode;
  newnode = (struct node *)malloc(sizeof(struct node));
  newnode->data = c;
  newnode->left = NULL;
  newnode->right = NULL;
  if (root == NULL)
    root = newnode;
  else
    insert(root, newnode);
}

void insert(struct node *temp, struct node *nn) {
  char ch;
  printf("Enter your choice:(L/R)");
  scanf(" %c", &ch);
  if (ch == 'L' || ch == 'l') {
    if (temp->left == NULL)
      temp->left = nn;
    else
      insert(temp->left, nn);
  }
  if (ch == 'R' || ch == 'r') {
    if (temp->right == NULL)
      temp->right = nn;
    else
      insert(temp->right, nn);
  }
}
void inorder(struct node *temp) // LNR
{
  if (temp != NULL) {
    inorder(temp->left);
    printf("%d ", temp->data);
    inorder(temp->right);
  }
}

void preorder(struct node *temp) // NLR
{
  if (temp != NULL) {
    printf("%d ", temp->data);
    preorder(temp->left);
    preorder(temp->right);
  }
}
void postorder(struct node *temp) // LRN
{
  if (temp != NULL) {
    postorder(temp->left);
    postorder(temp->right);
    printf("%d ", temp->data);
  }
}
int main() {
  int data;
  int ch, cont;
  do {
    printf("Enter your choice: ");
    printf("\n1.create\n2.inorder display\n3.preorder display\n4.postorder "
           "display\n");
    scanf("%d", &ch);
    switch (ch) {
    case 1:
      printf("Enter your data: ");
      scanf(" %d", &data);
      create(data);
      break;
    case 2:
      inorder(root);
      break;
    case 3:
      preorder(root);
      break;
    case 4:
      postorder(root);
      break;
    }
    printf("Enter 1 to continue, 0 to exit\n");
    scanf("%d", &cont);
  } while (cont == 1);
}
