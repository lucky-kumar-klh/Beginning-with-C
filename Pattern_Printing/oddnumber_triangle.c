#include <stdio.h>

int main() {

    int n;
    printf("Enter the number n : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 2*i-1; j=j+2)  // 1,3,5,7..... = 2n-1 in AP.
        {                          
            printf("%d ", j);
        }
        printf("\n");
    }
    

    return 0;
}