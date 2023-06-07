#include <stdio.h>
int main() {
    int n, m;
    printf("Enter the number of rows n : ");
    scanf("%d", &n);
    printf("Enter the number of columns m : ");
    scanf("%d", &m);
    for (int i = 1; i <= n; i++)
    {
        for (int i = 1; i <= m; i++)
        {
          printf("*");
        }
        printf("\n");
    }
    
    return 0;
}