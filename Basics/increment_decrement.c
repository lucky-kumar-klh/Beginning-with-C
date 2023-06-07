#include<stdio.h>
int main(){
    int x = 3;

    printf("%d\n", x++); // print 3, then increment for next line i.e, 4 
    printf("%d\n", ++x); // increment 4 i.e, 5, then print 5.
    printf("%d\n", --x); // decrement 5 i.e, 4, then print 4.
    printf("%d\n", x--); // print 4, then decrement 4 i.e, 3 for next line.
    return 0;
}