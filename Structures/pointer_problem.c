#include <stdio.h>
typedef int* pt;  // typedef provides existing data types a new name.
int main(){
    int x = 5, y = 7;  // both are same data types
    //int* p = &x, q = &y;  // int* p and int q, Therefore both are different data types
    // How to solve this ?
    // Using typedef !!
    pt p = &x, q = &y;

    printf("%p\n", p);
    printf("%p\n", q);
    return 0;
}