#include<stdio.h>
int main() 
{
    int n;
    printf("enter n : ");
    scanf("%d", &n);

    int a = 100;
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", a);
        a = a - 3;
    }
    
    return 0;
}