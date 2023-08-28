#include <stdio.h>
int main(){
    int z = (int)9;
    char y = 'a';
    int x = (int)y;
    printf("%d\n", x);
    printf("%d\n", y);   // both methods are correct in order to print ASCII values
    printf("%d\n", z);
    return 0;
}