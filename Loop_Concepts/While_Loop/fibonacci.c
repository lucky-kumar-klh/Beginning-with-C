#include <stdio.h>
int main() {
    int n;
    printf("Enter the nth term of fibonacci series : ");
    scanf("%d", &n);

// 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, .........., n.
// after a=1, b=1 & sum=2,
// Since a=b & b=sum,
// a=1 and b=2, therefore sum=3
// then a=2 and b=3, therefore sum=5
// so on ..............

    int a = 1;
    int b = 1;
    int sum;

    for (int i = 1; i <= n-1; i++)
    {
        sum = a + b ;
        //printf("%d, ", sum);

        a = b;
        b = sum;
    }
    printf("%d\n", sum);
    
    return 0;
}