#include <stdio.h>
void reverse(int array[]){
    int i=0, j=5;
    while ( i<=j )    // for( int i=0, j=5; i<j; i++,j--)
    {
        int temp = array[i];
        array[i] = array[j];
        array[j] = temp;
        i++;
        j--;
    }
    return;
}
int main() {
    int array[6] = {1,2,3,4,5,6};
    reverse(array);
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", array[i]);
    }
    
    return 0;
}