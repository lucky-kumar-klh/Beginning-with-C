#include <stdio.h>
int factorial(int n){
    int a = 1;
    for (int i = 1; i <= n; i++)
    {
        a = a * i;
    }
    return a;
}
int main() {
    int n;
    printf("Enter number n : ");
    scanf("%d", &n);

    int fact = factorial(n);
    printf("Factorial of %d is %d.\n", n, fact);
    return 0;
}