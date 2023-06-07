#include <stdio.h>

int main() {

    int x = 23;
    int* y = &x;
    int** z = &y; 

    printf("Hello World\n");
    
    printf("%d\n", *y);
    printf("%p\n", &y);
    printf("%d\n", **z);
    printf("%p\n", z);

    return 0;
}