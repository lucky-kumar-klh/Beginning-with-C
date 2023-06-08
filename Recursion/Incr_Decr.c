#include <stdio.h>
void Incr_Decr(int n){
    if( n==0 ) return;

    printf("%d\n", n);  // Code before Call
    Incr_Decr(n-1);     // Call
    printf("%d\n", n);  // Code after Call
    return;
}

int main(){
    int n;
    printf("Enter a number n : ");
    scanf("%d", &n);

    Incr_Decr(n);
    return 0;
}