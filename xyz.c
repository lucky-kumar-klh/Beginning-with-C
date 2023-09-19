#include <stdio.h>
#include <math.h>
int digit(int a){
	int count = 0;
	while ( a != 0 ){
		a /= 10;
		count++;
	}
	return (count-1);
}
int main(){
	
	int n;
	int lastDigit, firstDigit;
	scanf("%d", &n);
    lastDigit = n / pow(10,digit(n));
	firstDigit = n % 10;

	printf("First Digit = %d\nLast Digit = %d", firstDigit, lastDigit);
	
}