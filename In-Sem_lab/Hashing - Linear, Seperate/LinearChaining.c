#include <stdio.h>
int tsize;
int hash(int data) {
  return data % tsize;
}
int li_pr(int index) {
  return (index + 1) % tsize;
}
int main() {
  int i, n, j, key;
  printf("Enter the table size:");
  scanf("%d", &tsize);

  printf("Enter no. of data:");
  scanf("%d", &n);

  int a[n], ht[tsize];
  printf("Enter the data:");
  for (i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }

  for (i = 0; i < tsize; i++) {
    ht[i] = -1;
  }

  for (j = 0; j < n; j++) {
    key = a[j];
    i = hash(key);
    while (ht[i] != -1) {
      i = li_pr(i);
    }
    ht[i] = key;
  }
  printf("The datas are:");
  for (i = 0; i < tsize; i++) {
    printf("\nElement at position %d: %d", i, ht[i]);
  }
}
