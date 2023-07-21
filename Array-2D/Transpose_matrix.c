#include <stdio.h>
int main(){
    int r, c;
    printf("Enter no of rows : ");
    scanf("%d", &r);
    printf("Enter no of columns : ");
    scanf("%d", &c);

    int arr[r][c];
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Transpose of this matrix is :\n");
    for (int i = 0; i < c; i++){
        for (int j = 0; j < r; j++){
            printf("%d  ", arr[j][i]);
        }
        printf("\n");
    }
    // or we can also do by swaping method !

    
    // for (int i = 0; i < c; i++){
    //     for (int j = i; j < r; j++){
    //         int temp = arr[i][j];
    //         arr[i][j] = arr [j][i];
    //         arr[j][i] = temp;
    //     }
    // }
    // for (int i = 0; i < c; i++){
    //     for (int j = 0; j < r; j++){
    //         printf("%d  ", arr[j][i]);
    //     }
    //     printf("\n");
    // }
    
    return 0;
}