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


int main(){
    int arr[] = {6,1,7,3,2,5,4,8,9,9,10};
    int sum = 55, sumArr = 0;
    for (int i = 0; i < 11; i++){
        sumArr += arr[i];
    }
    int extraElement = sumArr - sum;
    printf("%d\n", extraElement);
    return 0;
}