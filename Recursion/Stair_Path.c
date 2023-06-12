#include <stdio.h>
int stairs(int n){
    if ( n==1 ) return 1;       // if only 1 stair is there, then there is only one way to through it.
    else if ( n==2 ) return 2;  // if 2 stairs are there, either one can go by using single steps or double steps. therefore 2 ways.
    else if ( n==3 ) return 4;  // stairs are 3, 4 ways to go using single, double and triple steps.
    int sum = stairs(n-1) + stairs(n-2) + stairs(n-3);
    return sum;
}
int main(){
    int n;
	printf("Enter number n : ");
	scanf("%d", &n);
    printf("There are total %d ways to climb %d stairs\n", stairs(n), n);
    return 0;
}