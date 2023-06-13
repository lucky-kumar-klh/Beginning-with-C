#include <stdio.h>
int main () {
    int a [4] ;
    for (int i = 0; i <= 3; i++)
    {
        printf("Enter element no %d of array : ", i+1);
        scanf("%d", &a[i]);
    }
    for (int i = 0; i <= 3; i++)
    {
        printf("%d ", a[i]);
    }
    
    return 0;
}