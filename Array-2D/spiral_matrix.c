#include <stdio.h>
int main() {
    int m, n;
    printf("Enter no of rows m : ");
    scanf("%d", &m);
    printf("Enter no of columns n : ");
    scanf("%d", &n);
    printf("Enter the elements in your Matrix :\n");
    int arr[m][n];
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Your Matrix is :\n");
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            printf("%d  ", arr[i][j]);
        }
        printf("\n");
    }
    printf("Spiral Print of matrix is :\n");
    // spiral printing
    int minr = 0, maxr = m-1;
    int maxc = n-1, minc = 0;
    int tot_ele = m * n, count = 0;
    while ( count < tot_ele ){
        for (int j = minc; j <= maxc; j++){
            printf("%d  ", arr[minr][j]);
            count++;
        }
        minr++;
        for (int i = minr; i <= maxr; i++){
            printf("%d  ", arr[i][maxc]);
            count++;
        }
        maxc--;
        for (int j = maxc; j >= maxr; j--){
            printf("%d  ", arr[maxr][j]);
            count++;
        }
        maxr--;
        for (int i = maxr; i >= minr; i--){
            printf("%d  ", arr[i][minc]);
            count++;
        }
        minc++;
    }

    return 0;
}