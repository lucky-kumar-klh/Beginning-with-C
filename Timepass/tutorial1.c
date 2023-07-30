#include <stdio.h>
int main(){
    int m, n;
    printf("Enter number of rows m: ");
    scanf("%d", &m);
    printf("Enter number of columns n: ");
    scanf("%d", &n);
    
    printf("Enter the elements of the matrix:\n");
    int arr[m][n];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    
    printf("Your Matrix is:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d  ", arr[i][j]);
        }
        printf("\n");
    }
    
    printf("Spiral Print of matrix is:\n");
    int r1 = 0, r2 = m - 1;
    int c1 = n-1, c2 = 0;
    int count = 0, total = m * n;
    
    while (count < total) {
        for (int j = c2; j <= c1; j++){
            printf("%d ", arr[r1][j]);
            count++;
            if ( count >= total ) break;
        }
        r1++;
        for (int i = r1; i <= r2; i++){
            printf("%d ", arr[i][c1]);
            count++;
            if ( count >= total ) break;
        }
        c1--;
        for (int j = c1; j >= c2; j--){
            printf("%d ", arr[r2][j]);
            count++;
            if ( count >= total ) break;
        }
        r2--;
        for (int i = r2; i >= r1; i--){
            printf("%d ", arr[i][c2]);
            count++;
            if ( count >= total ) break;
        }
        c2++;
    }
    return 0;
}