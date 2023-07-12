#include <stdio.h>
int main() {
    int check = 0;
    int arr[7] = { 7,6,5,4,5,6,7 };
    for ( int i = 0; i < 7; i++){
        for ( int j = i+1; j < 7; j++){
            if ( arr[i] == arr[j] ){
                check = 1;
            }
            
        }
        
    }
    
    return 0;
}