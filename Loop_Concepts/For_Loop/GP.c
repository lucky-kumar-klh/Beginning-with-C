#include<stdio.h>
int main() {
    int n;
    printf("Enter number n : ");
    scanf("%d", &n);

    int a = 3;
    for (int i = 1; i <= n; i=i+1)
    {
        printf("%d\n", a);
        a = a*4 ;
    }
    
    return 0;
}