#include <stdio.h>
int main() {
    int r, c, i, j;
    printf("Enter no of rows : ");
    scanf("%d", &r);
    printf("Enter no of columns : ");
    scanf("%d", &c);
    int arr[r][c];
    // User input
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    // array
    printf("Your matrix is : \n");
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){      
            printf("%d  ", arr[i][j]);
        }
        printf("\n");
    }
    printf("Transpose of this matrix is : \n");
    // Swaping values
    for ( i = 0; i < c; i++){
        for ( j = i; j < r; j++){
            int temp = arr[i][j];
            arr[i][j] = arr [j][i];
            arr[j][i] = temp;
        }
    }
    // Transpose
    for ( i = 0; i < c; i++){
        for ( j = 0; j < r; j++){
            printf("%d  ", arr[j][i]);
        }
        printf("\n");
    }
    // Rotate of matrix
    printf("New Rotated matrix is : \n");
    for ( i = 0; i < c; i++){
        for ( j = r-1; j >= 0; j--){
            printf("%d  ", arr[j][i]);
        }
        printf("\n");
    }
    
    return 0;
}