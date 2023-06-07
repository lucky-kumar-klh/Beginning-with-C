#include<stdio.h>
int main()
{
    int a = 0, b = 0;
    for ( ;a < 2, b < 5; a++, b++)
    {
        printf("%d %d\n", a, b);
    }
    
    return 0;
}