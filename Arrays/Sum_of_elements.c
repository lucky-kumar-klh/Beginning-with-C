#include <stdio.h>
int main () {
    int n;
    printf("Enter how many elements of array you need : ");
    scanf("%d", &n);
    int array[n],a = 0;
    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d : ", i+1);
        scanf("%d", &array[i]);
        a = a + array[i];
    }
    printf("Sum of all elements is : %d\n", a);
    
    return 0;
}