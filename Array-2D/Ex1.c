#include<stdio.h>
int main() {
    int c, i, j;
    printf("Enter no of columns : ");
    scanf("%d", &c);
    
    int arr[2][c];
    printf("Enter Students roll no : \n");
    for ( i = 0; i < 2; i++){
        scanf("%d ", arr[i][0]);
    }
    printf("Enter marks of students : \n");
    for ( i = 0; i < 2; i++){
        scanf("%d ", arr[i][1]);
    }
    for ( i = 0; i < 2; i++){
        for ( j = 0; j < c; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}