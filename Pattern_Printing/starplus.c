#include <stdio.h>
int main() {
    int n;
    printf("Enter any odd number n : ");
    scanf("%d", &n); 

    if ( n%2 != 0 )
    {
        for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i==(n+1)/2 || j==(n+1)/2)
            {
                printf("* ");
            }
            else printf("  ");
        }
        printf("\n");
    }
    }
    else printf("You can only print an odd number.\n");
    
    
    return 0;
}