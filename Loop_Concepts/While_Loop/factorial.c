#include <stdio.h>
int main() {
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    
    int a = 1 ;
    int i = 1;
    for (int i = 1; i <= n; i++)
    {   
        a = a * i;  // 1 x i(1,2,3,4,....,n)
        printf("%d! = %d\n", i, a);
    }
    
    printf("Factorial of the number %d is : %d\n", n, a);
    return 0;
}