#include <stdio.h>
int main() {
    int n;
    printf("Enter the number n : ");
    scanf("%d", &n);
    for (size_t i = 1; i <= n; i++)
    {
        for (int i = 1; i <= n; i++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
    
    return 0;
}