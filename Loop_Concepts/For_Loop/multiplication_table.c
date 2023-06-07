#include <stdio.h>
int main() {
    int n, a, i;
    printf("Enter the number n : ");
    scanf("%d", &n);

    for (int i = 1; i <= 10; i++)
    {
        a = n*i;
        printf("%d x %d = %d\n", n, i, a);
    }
    
    return 0;
}
