#include <stdio.h>
int main(){
    int arr[] = {1,2,3,4,5,6,1,2,9};
    for (int i = 0; i < 9; i++){
        for (int j = i+1; j < 9; j++){
            if ( arr[i] == arr[j] ){
                printf("Duplicate values are in the indexes %d & %d\n", i, j);
            }
        }
    }
    printf("Done Sir !\n");
    return 0;
}