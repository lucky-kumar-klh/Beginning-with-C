#include <stdio.h>
int main() {
    int array[8] = {1,2,3,4,5,6,7,8};
    int x, count = 0;
    printf("Enter a number x : ");
    scanf("%d", &x);
    for ( int i = 0; i < 8; i++){
        for ( int j = i+1; j < 8; j++){        // j = i+1 will not allow to repeat the pairs.
            if ( x == array[i] + array[j] ){
                count = count + 1;
            }
        }
    }
    printf("%d\n", count);
    return 0;
}