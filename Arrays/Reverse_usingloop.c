#include <stdio.h>
void reverse(int array[], int a, int b ){
    for (int i = a, j = b; i < j; i++, j--)
    {
        int temp = array[i];
        array[i] = array[j];
        array[j] = temp;
    }
    
    return;
}
int main () {
    int k, n = 7;
    int array[7] = { 1,2,3,4,5,6,7 };
    printf("Enter value of k : ");
    scanf("%d", &k);
    k = k % n;
    reverse(array, 0, n-1); 
    reverse(array, 0, k-1);
    reverse(array, k, n-1);   
    for (int i = 0; i < 7; i++)
    {
        printf("%d ", array[i]);
    }
    
    return 0;
}