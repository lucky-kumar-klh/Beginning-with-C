#include <stdio.h>
int i, j;
int main(){
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    for (i = 0; i < 3; i++){
        if ( i % 2 == 0 ){
            for ( j = 0; j < 3; j++){
                printf("%d  ", arr[i][j]);
            }
            printf("\n");
        }
        else{
            for ( j = 2; j >= 0; j--){
                printf("%d  ", arr[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}