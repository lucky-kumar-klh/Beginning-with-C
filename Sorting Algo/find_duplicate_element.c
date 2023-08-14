#include <stdio.h>
// int main(){
//     int arr[] = {1,2,3,4,5,6,1,2,9};
//     for (int i = 0; i < 9; i++){
//         for (int j = i+1; j < 9; j++){
//             if ( arr[i] == arr[j] ){
//                 printf("Duplicate values are in the indexes %d & %d\n", i, j);
//             }
//         }
//     }
//     printf("Done Sir !\n");
//     return 0;
// 

int main(){
    int x = 0;
    int arr[] = {0,2,8,4,5,6,7,8,9};
    int brr[] = {0,0,0,0,0,0,0,0,0};
    for ( int i = 0; i < 9; i++){
        if ( brr[x] != 1 ){
            x = arr[i];
            brr[x] = 1;
        }
        else {
            printf("%d\n", arr[i]);
            break;
        }
    }
    return 0;
}