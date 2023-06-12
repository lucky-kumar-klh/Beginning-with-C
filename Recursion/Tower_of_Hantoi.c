#include <stdio.h>
void hantoi(int n, char s, char h, char d) { // s --> source, h--> helper, d --> destination  
    
    if ( n==0 ) return;
    hantoi(n-1, s, d, h);     // smaller pyramid ke liye h & d inter change honge.
    printf("%c --> %c\n", s, d);
    hantoi(n-1, h, s, d);
    return;
}
int main () {
    int n;
    printf("Enter number n : ");
    scanf("%d", &n);
    hantoi(n,'A','B','C');
    return 0;
}