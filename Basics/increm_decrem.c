#include<stdio.h>
int main(){

    int x = 4, y = 4, z ;
    z = --x - y;    // z = 4-3 = 1
                    // x-- = pehle x use karo, then decrease x.
    //z = x-- - y;    // z = 3-3 = 0
                    // --x = pehle decrease x, then x use karo.
   
    printf("%d\n", x); 
    printf("%d\n", y); 
    printf("%d\n", z); 

    return 0;
}