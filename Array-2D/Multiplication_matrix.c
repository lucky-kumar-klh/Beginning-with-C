#include <stdio.h>

int main(){

    int r1, c1;
    // int arr[3][2] = {{1,0},{4,1},{2,3}};
    printf("Let us create 1st matrix ! \n");
    printf("Enter no of rows : ");
    scanf("%d", &r1);
    printf("Enter no of columns : ");
    scanf("%d", &c1);
    int arr[r1][c1];
    for (int i = 0; i < r1; i++){
        for (int j = 0; j < c1; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    int r2, c2;
    // int brr[2][4] = {{1,0,1,2},{2,3,1,4}};
    printf("Now create second matrix !\n");
    printf("Enter no of rows : ");
    scanf("%d", &r2);
    printf("Enter no of columns : ");
    scanf("%d", &c2);
  
    if ( c1 != r2 ){
        printf("Sorry !! You can not multiply these matrices \n");
        printf("You need to follow rules before multiplying 2 matrices.\n");
    }
    else  {
    int brr[r2][c2];
    for (int i = 0; i < r2; i++){
        for (int j = 0; j < c2; j++){
            scanf("%d", &brr[i][j]);
        }
    }
    printf("Both matrices have now created ! \n");
    // int mrr[3][4];
    int mrr[r1][c2];
    int k = 2;   /* --> arr[i][0],arr[i][1],....,arr[i][k] x 
                               brr[0][j],brr[1][j],....,brr[k][j] */
    // how to multiply.
    for (int i = 0; i < r1; i++){
        for (int j = 0; j < c2; j++){
            mrr[i][j] = 0;
            for (int k = 0; k < c1 && r2; k++){
                mrr[i][j] += arr[i][k] * brr[k][j];
            }
        }
    }
    // print mrr[][]
    printf("Multiplication of both matrices is : \n");
    for (int i = 0; i < r1; i++){
        for (int j = 0; j < c2; j++){
            printf("%d  ", mrr[i][j]);
        }
        printf("\n");
    }
    }
    return 0;
}