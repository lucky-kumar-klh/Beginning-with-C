#include <stdio.h>
int main() {
    int n, t;
    int sum = 0;
    printf("Enter number : ");
    scanf("%d", &n);
    t = 2*n;
    for (int i = 0; i < t; i = i+2){
        printf("%d\n", i);
        if ( i % 3 == 0 ){
            sum = sum + i;
        }
    }
    printf("Sum is %d\n", sum);
    return 0;
}