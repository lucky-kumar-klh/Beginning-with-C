#include<stdio.h>
int main(){
    char str[100];
    printf("Enter your string : ");
    gets(str);
    printf("Size of this string is : ");
    int i = 0, number = 0;
    while ( str[i] != '\0' ){
        number++;
        i++;
    }
    int size = number;
    printf("%d\n", size);
    printf("Reverse of this string is : ");
    for (int i = size; i >= 0; i--){
        printf("%c", str[i]);
    }
    
    return 0; 
}