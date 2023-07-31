#include <stdio.h>
int main(){
    char y = 'a';
    int x = (int)y;
    printf("%d\n", x);
    printf("%d\n", y);   // both methods are correct in order to print ASCII values

    return 0;
}