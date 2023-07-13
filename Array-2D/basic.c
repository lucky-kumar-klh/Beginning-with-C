#include <stdio.h>
int main() {
    int r,c;
    printf("Enter no of rows : ");
    scanf("%d", &r);
    printf("Enter no of columns : ");
    scanf("%d", &c);
    int arr[r][c]; //= {{1,2,3},{3,4,5},{5,6,7}};
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            scanf("%d ", &arr[i][j]);
        }
    }
    printf("Your matrix is :\n");
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}