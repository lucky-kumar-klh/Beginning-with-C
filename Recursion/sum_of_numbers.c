#include <stdio.h>

int sum(int n){
    if ( n == 1 ) return 1;
    int SUM = n+sum(n-1);
    return SUM;
}

int main() {
    int n;
    printf("Enter number n : ");
    scanf("%d", &n);
    printf("Sum is %d\n", sum(n));

    return 0;
}

