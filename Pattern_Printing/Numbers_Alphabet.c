#include <stdio.h>

int main() {

    int n;
    printf("Enter the number n : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if ( i % 2 == 0 )
        {
            int a = 1;
            for (int j = 1; j <= i; j++)
            {
                int d = a + 64;
                char ch = (char)d;
                printf("%c", ch);
                a++;               
            }
            printf("\n");
            
        }
        else {
            for (int k = 1; k <= i; k++)
            {
                printf("%d", k);
            }
            printf("\n");
        }
    }
    

    return 0;
}