#include <stdio.h>
int main (){
    int arr[7] = { 1,2,6,4,5,6,7 };
    for (int i = 0; i < 7; i++){
        for (int j = i+1; j < 7; j++){
            if ( arr[i] == arr[j] ){
                printf("%d is the duplicate number in the array\n", arr[i]);
                break;
            }
        }
    }
    return 0;
}