#include <bits/stdc++.h>
using namespace std;
void sum (){
  struct node *temp = head;
  float sum = 0, count = 0;
  while (temp != NULL){
    sum += temp->data;
    count++;
    temp = temp->link;
  }
  float avg = sum/count;  
  printf("Sum = %.0f, count = %.0f, Avg = %.2f", sum, count, avg);
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
  printf("Maximum element = %d\nMinimum element = %d", max, min);
}
int main(){
  
  return 0;
}