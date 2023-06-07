#include<stdio.h>
int main() {
    
int a;
printf("Enter value of a = ");
scanf("%d", &a);

int b;
printf("Enter value of b = ");
scanf("%d", &b);

int p = a - b;
printf("Product of given values is %d\n", p);

    return 0;
}