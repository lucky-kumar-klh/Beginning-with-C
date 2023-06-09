#include <stdio.h>
int POW(int a, int b){
    if ( b==0 ) return 1;
    int prod = a * POW(a,b-1);
    return prod;
}
int main() {
    int a,b;
    printf("Enter Base a : ");
    scanf("%d", &a);
    printf("Enter Power b : ");
    scanf("%d", &b);

    printf("%d raised to power %d is %d\n",a, b, POW(a,b));
    return 0;
}