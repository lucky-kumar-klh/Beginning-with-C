#include <stdio.h>
int main() {
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    
    int sum ;
    int rev = 0;
    while ( n != 0 )
    {
        rev = rev * 10 ;
        rev = rev + (n % 10);
        n = n/10;
    }

    printf("Reverse number is : %d\n", rev);
    sum = n + rev ;
    printf("Sum is %d\n", sum);
    return 0;
}