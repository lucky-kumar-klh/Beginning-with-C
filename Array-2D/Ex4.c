#include <stdio.h>
int main(){
    int i, j, maxCount = 0;
    int indx = -1;
    int arr[3][4] = {{1,0,0,0},{1,1,1,0},{1,1,1,1}};
    for ( i = 0; i < 3; i++){
        int count = 0;
        for ( j = 0; j < 4; j++){
            if ( arr[i][j] == 1 ) count++;
        }
        if ( maxCount < count ){
            maxCount = count;
            indx = i;
        }
        printf("\n");
    }
    printf("maximum no of ones are : %d and index of row is %d\n", maxCount, indx);
    return 0;
}