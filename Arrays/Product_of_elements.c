#include <stdio.h>
int main() {
    int n;
    printf("Enter no. of elements in array : ");
    scanf("%d", &n);
    int prod[n] ;
    int a = 1;
    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d : ", i+1);
        scanf("%d", &prod[i]);
        a = a * prod[i];
    }
    printf("Product of all elements is : %d\n", a);
    return 0;
}