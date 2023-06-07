#include<stdio.h>
int factorial(int n){
    if ( n==0 ){
        return 1;
    }
    int fact = n * factorial(n-1);
    return fact;
}
int main(){
    int n; 
    printf("Enter factorial number n : ");
    scanf("%d", &n);

    printf("%d\n", factorial(n));
    return 0;
}