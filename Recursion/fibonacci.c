#include <stdio.h>
int fibonacci(int n);

int main(){
    printf("sum is : %d\n", fibonacci(6));
    return 0;
}

int fibonacci(int n){
    if ( n == 1 )
    {
        return 1;
    }
    if ( n == 0 )
    {
        return 0;
    }
    
    int fibonacci2 = fibonacci(n-1);
    int fibonacci3 = fibonacci(n-2);
    int fibonacci1 = fibonacci2 + fibonacci3;
    return fibonacci1;
}