#include <stdio.h>
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= n-i; k++)
        {
            printf("  ");
        }
        int a = 1;
        for (int j = 1; j <= 2*i-1; j++)
        {
            int d = a + 64;    // to print alphabet pyramid.
            printf("%c ", d);
            a++;
        }
        printf("\n");
    }
    return 0;
}