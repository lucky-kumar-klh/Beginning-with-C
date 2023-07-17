#include <stdio.h>
int main(){
    int r, c, sum = 0;
    printf("Enter no of rows : ");
    scanf("%d", &r);
    printf("Enter no of columns : ");
    scanf("%d", &c);
    int a[r][c];
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            scanf("%d", &a[i][j]);
        }
    }
    printf("Your array is : \n");
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            printf("%d  ", a[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < 3; i++){        // Enter the values of i & j from you want to add them
        for (int j = 1; j < 4; j++){
            sum = sum + a[i][j];
        }
    }
    printf("Sum of all elements in this rectangle is = %d\n", sum);
    return 0;
}