#include <stdio.h>
void reverse(int array[], int a, int b){
    int i, j;
    for (int i = a, j = b; i < j; i++, j--)
    {
        int temp = array[i];
        array[i] = array[j];
        array[j] = temp;
    }
      
    return;
}
int main() {
    int array[6] = {1,2,3,4,5,6};
    reverse(array, 2, 5);
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", array[i]);
    }
    
    return 0;
}