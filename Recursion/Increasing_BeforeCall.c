#include <stdio.h>

void Increasing(int x, int n){
    if ( x > n ) return;

    printf("%d\n", x);    // Code before Call
    Increasing( x+1, n);  // Call

    return;
}
int main() {
    
    int n;
    printf("Enter number n : ");
    scanf("%d", &n);
    Increasing(1,n); 
    return 0;
}