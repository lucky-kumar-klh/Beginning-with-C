#include <stdio.h>
int factorial(int a){
    int fact = 1;
    for (int i = 1; i <= a; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int main() {
    int n, r;
    printf("Enter n : ");
    scanf("%d", &n);
    printf("Enter r : ");
    scanf("%d", &r);

    int ncr = factorial(n)/factorial(n-r);
    printf("Value of nCr is = %d\n", ncr);
    return 0;
}