#include<stdio.h>
int main(){
    int n;
    int arr[n];
    int i = 0, j = n-1;
    // for (int i = 0, j = 9; i < j; i++, j--){
    //     if ( arr[i] + arr[j] == 12 ){
    //         printf("Yeah !\n");k
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