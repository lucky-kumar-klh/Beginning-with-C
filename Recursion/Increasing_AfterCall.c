#include <stdio.h>
void Increasing(int n){
    if ( n==0 ) return;

    Increasing(n-1);   // Call
    printf("%d\n", n); // Code after Call
    return;
}

int main() {
    
    int n;
    printf("Enter number n : ");
    scanf("%d", &n);
    Increasing(n);

    return 0;
}