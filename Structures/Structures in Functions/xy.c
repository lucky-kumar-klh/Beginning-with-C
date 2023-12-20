#include <stdio.h>
struct height{
  int feet;
  int inch;
};

float convert(struct height *h){
  return (h->feet)*30 + (h->inch)*2.54;
}

void display(float cm, int weight){
  float ans = cm/(weight*weight);
  printf("BMI = %.2f", ans);
}

void accept(struct height *h){
  // logic
  printf("Enter feet : ");
  scanf("%d", &h->feet);
  printf("Enter inches : ");
  scanf("%d", &h->inch);
  int weight;
  printf("Enter weight : ");
  scanf("%d", &weight);

  float cm = convert(h);

  display(cm, weight);
}

int main(){
  struct height h1;
  accept(&h1);  
  return 0;
}