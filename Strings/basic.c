#include <stdio.h>
int main() {
    char arr[11] = {'H','e','l','l','o',' ','W','o','r','l','d'} ;
    char brr[] = "Hello world! It's my new program !\0";
    // printf("%c\n", arr[2]);
    // for (int i = 0; i < 11; i++){
    //     printf("%c", arr[i]);
    // }
    int i = 0;
    while ( brr[i] != '\0' ){
        printf("%c", brr[i]);
        i++;
    }
    
    
    return 0;
}