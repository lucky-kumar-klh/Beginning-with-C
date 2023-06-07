#include <stdio.h>
int sum(int n);

int main() {

    printf("Total sum is : %d\n", sum(5));

    return 0;
}

int sum(int n){
    if ( n == 1 )
    {
        return 1;
    }
    
    int sumnm1 = sum(n-1);
    int sumn = sumnm1 + n ;
    return sumn;
}