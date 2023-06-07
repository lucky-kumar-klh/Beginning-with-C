#include <stdio.h>
int fibonacci(int n){
    int a = 1;
    int b = 1;
    int sum;
// 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, .........., n.
// after a=1, b=1 & sum=2,
// Since a=b & b=sum,
// a=1 and b=2, therefore sum=3
// then a=2 and b=3, therefore sum=5
// so on ..............

    for (int i = 1; i <= n-1; i++)
    {
        sum = a + b ;

        a = b;
        b = sum;
    }
    return sum;
}
int main() {
    int n;
    printf("Enter number n : ");
    scanf("%d", &n);

    int fib = fibonacci(n);
    printf("Fibonacci number of %d is %d.\n", n, fib);
    return 0;
}