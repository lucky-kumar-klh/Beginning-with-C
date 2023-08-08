#include <stdio.h>
int main(){
    char str[] = "Welcome my Friends";
    char* ptr = str;   // char* ptr stores address of string str 
    int i = 0;
    while ( *ptr != '\0' ){
        printf("%c", *ptr);  // *ptr means value at address
        ptr++; // since gap between two address is 1 so pts++ 
        //i++;
    }
    
    return 0;
}