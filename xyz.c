#include <stdio.h>
int main(){	
	int n, t, r, cube;
	printf("Enter your number : ");
	scanf("%d", &n);
	t = n;
	int sum = 0, a = 0;
	while ( n != 0 ){
		r = n % 10 ;
        cube = r*r*r ;
		sum = sum + cube ;
		n = n / 10 ;
		if ( t == sum ) {
			a = 1;
			break;
		}	
	}
	
	// if ( a == 1 ) printf("Yes, It is Avagadro number.\n");
	// else printf("No, Not an Avagadro Number.\n");
	
	return 0;
} 