#include <stdio.h>
#include <math.h>
int digits(int a){
	int count = 0;
	while ( a != 0 )
	{
		a = a/10;
		count++;
	}
	
	return count-1;
}
int main()
{
    int n;
	int lastDigit, firstDigit;
	scanf("%d", &n);
	
	firstDigit = n % 10;
	lastDigit = n / pow(10,digits(n));

    if ( lastDigit == 0 ){
		lastDigit = n;
	}
	
	

	if ( firstDigit == lastDigit )
	{
		printf("Yes, %d is a Rainbow Number", n);
	}
	else printf("No, %d is not a Rainbow number", n);
	


	return 0;
}
