#include <stdio.h>

void swap(int* x, int* y){
    int temp = *x ;   // value of address in int x 
    *x = *y;
    *y = temp;
    return;
}

int main(){

    int a, b;
    printf("Enter number a : ");
    scanf("%d", &a);
    printf("Enter number b : ");
    scanf("%d", &b);
    int *x = &a;
    int *y = &b;

    int temp = *x;
    *x = *y;
    *y = temp;

    // swap(&a,&b);
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return  0;
}