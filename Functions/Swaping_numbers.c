#include <stdio.h>

void swap(int a, int b){
    int temp = a;
    a = b;                // creating a swaping function will not do the job.
    b = temp;             // because it's a pass bby value error.
    return;               // to solve this error we need to pass the actuall address of a & b.
}                         // there comes pointer.

int main(){

    int a, b;
    printf("Enter number a : ");
    scanf("%d", &a);
    printf("Enter number b : ");
    scanf("%d", &b);
    
    swap(a,b);
    printf("a = %d\n", a);
    printf("a = %d\n", b);

    return  0;
}