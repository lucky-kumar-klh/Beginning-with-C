#include <stdio.h>

int factorial(int n);

int main () {
    int num;
    printf("Enter the number which you want the factorial of : ");
    scanf("%d", &num);
    factorial(4);
    return 0;
}

int factorial(int n){
    if ( n == 1 || n == 0 )
    {
        return 1;
    }
    int factnm1 = f(n-1);
    int fac = n * factnm1;
    printf("The factorial of the number is : %d", fac);
}

