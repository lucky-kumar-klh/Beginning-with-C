#include <stdio.h>
int main() {
    int arr[5] = {6, 7, 3, 5, 8,};
    int brr[5];
    for ( int i = 0; i < 5; i++ )
    {   
        brr[i] = arr[4-i];
    }
    for ( int i = 0; i < 5; i++){
        printf("%d ", brr[i]);
        }
    return 0;
}