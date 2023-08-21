#include<stdio.h>
int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int i = 0, j = 9;
    // for (int i = 0, j = 9; i < j; i++, j--){
    //     if ( arr[i] + arr[j] == 12 ){
    //         printf("Yeah !\n");
    //     }
    // }

    while ( i < j ){
        if ( arr[i] + arr[j] == 12 ) {
            printf("%d %d\n", i, j);
            break;
        }
        else if ( arr[i] + arr[j] > 12 ) j--;
        else if ( arr[i] + arr[j] < 12 ) i++;
    }

    return 0;
}