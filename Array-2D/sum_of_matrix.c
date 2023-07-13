#include <stdio.h>
int main() {
    int r, c, sum = 0;
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
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            sum = sum + arr[i][j];
        }
    }
    printf("Sum of elements is : %d\n", sum);
    return 0;
}