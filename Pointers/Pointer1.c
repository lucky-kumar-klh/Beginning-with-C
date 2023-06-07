#include <stdio.h>

int main() {

    int x;
    int* hello;

    hello = &x;
    *hello = 0;

    printf("x = %d\n", x);
    printf("*ptr = %d\n\n", *hello);

    *hello += 5;
    printf("x = %d\n", x);
    printf("*ptr = %d\n\n", *hello);

    (*hello)++;
    printf("x = %d\n", x);
    printf("*ptr = %d\n\n", *hello);

    return 0;
}