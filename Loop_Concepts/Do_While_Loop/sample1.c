#include<stdio.h>
int main() {
    int n, a = 1;
    printf("ENter a number n : ");
    scanf("%d", &n);

    do
    {
        a++;
        printf("%d\n", a);
    } while ( a <= n );
    
    return 0;
}