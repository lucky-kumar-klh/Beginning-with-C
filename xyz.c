#include <stdio.h>
int main(){	
	int i, j, k = 0;
	//i = j = k = 0;
	k = ++i*++j;
	printf("%d\n",i+j+k);
	return 0;
} 