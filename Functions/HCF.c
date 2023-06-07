#include<stdio.h>

int min(int a, int b){
    if ( a < b ) return a;
    else return b;
}

int gcd(int a, int b){
    int x;
    for (int i = min(a,b); i >= 1; i--)
    {
        if ( a%i==0 && b%i==0  ){
            x = i;
            break;                   // jaise hi a & b will be divisible by i 
        }                            // x = i then break the loop.
    }
    return x;
}

int main(){

    int a,b;
    printf("Enter 1st number a : ");
    scanf("%d", &a);
    printf("Enter 2nd number b : ");
    scanf("%d", &b);

    int hcf = gcd(a,b);
    printf("HCF/GCD of %d and %d is %d\n", a, b, hcf);

    return 0;
}