#include <stdio.h>
#include <math.h>
// Binary function
int binary(int a){
    int digit, sum = 0, i = 0;
    while ( a > 0 ){
        digit = a & 1;
        sum = digit*pow(10,i) + sum;
        i++;
        a = a >> 1;
    }
    return sum;
}
// Octa Function
int octa(int b){
    
    return 0;
}
// Hexa function
int hexa(int c){
    return 0;
}
int main(){
    int n;
    scanf("%d", &n);
    for (int i=1, j=1, k=1, l=1; i <= n; i++, j++, k++, l++){
        printf("%d       %d       %d       %d\n", i, octa(j), hexa(k), binary(l));
    }
    
    return 0;
}