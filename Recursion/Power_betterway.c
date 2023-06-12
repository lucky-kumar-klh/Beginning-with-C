#include <stdio.h>

    int power(int a, int b){
        //int x = power(a,b/2); 
        if ( b==1  ) return a;
        if ( b==0 )  return 1;
        int x = power(a,b/2);       //\\    a^b = a^b\2 * a^b/2    \\//
    if ( b%2 == 0 ) 
        return x * x;
    else 
        return x * x * a;
    }   

int main() {
    int a,b;
    printf("Enter Base a : ");
    scanf("%d", &a);
    printf("Enter Power b : ");
    scanf("%d", &b);

    printf("%d raised to power %d is %d\n",a, b, power(a,b));
    return 0;
}