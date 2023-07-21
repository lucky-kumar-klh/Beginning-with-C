#include <stdio.h>
int main() {
    int arr[3][3] = {{1,0,2},{4,1,3},{5,2,1}};
    int brr[3][3] = {{2,3,1},{5,2,3},{1,1,4}};
    int mrr[3][3];
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            mrr[i][j] = arr[i][j] * brr[j][i];
        } 
    }
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("%d  ", mrr[j][i]);
        }
        printf("\n");
    }
    
    return 0;
}