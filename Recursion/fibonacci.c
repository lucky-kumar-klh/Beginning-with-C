#include <stdio.h>
int fibonacci(int n){
    if ( n == 1 )return 1;

    else if ( n == 0 ) return 0;
    
    //int fibonacci2 = fibonacci(n-1);
    //int fibonacci3 = fibonacci(n-2);
    //int fibonacci1 = fibonacci2 + fibonacci3;
    //return fibonacci1;
    return fibonacci(n-1) + fibonacci(n-2);
}

int main(){
    int n;
	printf("Enter number n : ");
	scanf("%d", &n);
    printf("sum is : %d\n", fibonacci(n));
    return 0;
}
