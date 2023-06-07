#include<stdio.h>
int main() 
{
    int n;
    printf("enter number n : ");
    scanf("%d", &n);
    
    float a = 100;
    for (int i = 1; i <= n; i++)
    {
        printf("%f\n", a);
        a = a/2 ;
    }
    
    return 0;
}