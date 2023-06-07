#include <stdio.h>
int main()
{
    int n, m;
    printf("Enter number n (rows) : ");
    scanf("%d", &n);

    int a = 1;
    for (int i = 1; i <= n; i++)
    {
        // int a = 1;         // ye tab valid hota jab 1 then 1 2 then 1 2 3 ..... print karna hota 
        for (int j = 1; j <= i; j++) 
        {
            printf("%d ", a);
            a=a+1;
        }
        printf("\n");
    }

    return 0;
}