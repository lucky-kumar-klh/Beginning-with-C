#include <stdio.h>
void rotate(int arr[], int p, int q){
    for (int i=p, j=q; i<=j; i++,j--){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}
int main() {
    int arr[7] = {1,2,3,4,5,6,7};
    rotate(arr, 0, 6);
    for (int i = 0; i < 7; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}