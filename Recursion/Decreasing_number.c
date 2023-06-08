#include <stdio.h>
void decreasing(int n){
    printf("%d\n", n);
    if ( n==1 ){
        return;
    }
    decreasing(n-1);
    return;
}

int main(){
    int n;
    printf("Enter number n : ");
    scanf("%d", &n);
    decreasing(n);
    return 0;
}