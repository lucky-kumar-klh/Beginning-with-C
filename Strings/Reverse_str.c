#include <stdio.h>
#include <string.h>
int palindrome(char str[], int size){
    int check = 0;
    for (int i = 0, j = size-1; i <= j; i++, j--){
        if (str[i] != str[j]){
            check = 1;
        }
    }
    return check;
}
int main(){
    char str[100];
    scanf(" %[^\n]s", str);
    int size = strlen(str);
    
    if (palindrome(str, size)) {
        printf("Not a palindrome");
    }
    else printf("Palindrome");
    
    return 0; 
}