#include <stdio.h>
int main() {

    int i,array[8] = {1,2,3,4,5,6,7,8};

    for ( i = 0; i < 8; i++ ){
        if ( i%2 == 0 ) array[i] = array[i] + 10;  
        else  array[i] = array[i] * 2;   
    }
    for ( i = 0; i < 8; i++ ){
        printf("%d ", array[i]);
    }
    return 0;
}