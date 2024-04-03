#include <stdio.h>
#include <stdlib.h>

struct node {
  struct node *left;
  int data;
  struct node *right;
} *root = NULL;

void insert(struct node *temp, struct node *nn);
struct node *getMin(struct node *temp);

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
  if (nn->data >= temp->data) {
    if (temp->right == NULL)
      temp->right = nn;
    else
      insert(temp->right, nn);
  }

  if (nn->data < temp->data) {
    if (temp->left == NULL)
      temp->left = nn;
    else
      insert(temp->left, nn);
  }
}

void binary_search(struct node *temp, int key) {
  if (key == temp->data)
    printf("Element found");
  if (key > temp->data) {
    if (temp->right == NULL)
      printf("Element not found");
    else
      binary_search(temp->right, key);
  }
  if (key < temp->data) {
    if (temp->left == NULL)
      printf("Element not found");
    else
      binary_search(temp->left, key);
  }
}

void min(struct node *temp) {
  while (temp->left != NULL)
    temp = temp->left;
  printf("min value in the tree is %d", temp->data);
}

void max(struct node *temp) {
  while (temp->right != NULL)
    temp = temp->right;
  printf("max value in the tree is %d", temp->data);
}

void inorder(struct node *temp) {
  if (temp != NULL) {
    inorder(temp->left);
    printf("%d ", temp->data);
    inorder(temp->right);
  }
}

void preorde(struct node *temp) {
  if (temp != NULL) {
    printf("%d ", temp->data);
    preorde(temp->left);
    preorde(temp->right);
  }
}

void postorde(struct node *temp) {
  if (temp != NULL) {
    postorde(temp->left);
    postorde(temp->right);
    printf("%d ", temp->data);
  }
}

void delet_node(struct node *root, int key) {
  struct node *parent = NULL, *curr = root;
  while (curr != NULL && curr->data != key) {
    parent = curr;
    if (key < curr->data)
      curr = curr->left;
    else
      curr = curr->right;
  }
  if (curr == NULL) // unsuccessful search for the key
    return;
  // case1 (deleting a leaf node(with no children or deg==0))
  if (curr->left == NULL && curr->right == NULL) {
    if (curr != root) {
      if (parent->left == curr)
        parent->left = NULL;
      else
        parent->right = NULL;
    } else
      root = NULL;
    free(curr);
  }
  // case 2 (node having two children)
  else if (curr->left != NULL && curr->right != NULL) {
    struct node *successor = getMin(curr->right);
    int d = successor->data;
    delet_node(root, successor->data);
    curr->data = d;
  }
  // case 3 (node with single child)
  else {
    struct node *child = (curr->left != NULL) ? curr->left : curr->right;
    if (curr != root) {
      if (parent->left == curr)
        parent->left = child;
      else
        parent->right = child;
    } else
      root = child;
    free(curr);
  }
}

struct node *getMin(struct node *temp) {
  while (temp->left != NULL) {
    temp = temp->left;
  }
  return temp;
}

int main() {
  int data;
  int ch, cont, key;
  do {
    printf("Enter your choice: ");
    printf("\n1.create\n2.inorder display\n3.preorder display\n4.postorder "
           "display\n5.Binary search\n6.Minimum\n7.Maximum\n8.delete node\n");
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
      preorde(root);
      break;
    case 4:
      postorde(root);
      break;
    case 5:
      printf("Enter key element");
      scanf("%d", &key);
      binary_search(root, key);
      break;
    case 6:
      min(root);
      break;
    case 7:
      max(root);
      break;
    case 8:
      printf("Enter the data to be deleted: ");
      scanf("%d", &data);
      delet_node(root, data);
      break;
    }
    printf("Enter 1 to continue, 0 to exit\n");
    scanf("%d", &cont);
  } while (cont == 1);
}
