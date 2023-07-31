#include <stdio.h>
int main(){
	char str[] = "ababd";
    int a = 0;
	for (int i = 0, j = 4; i < j; i++, j--){
		if ( str[i] == str[j] ) a = 1;
		else{
			a = 0;
			break;
		}
	}
	if ( a == 1 ) printf("Yes\n");
	else printf("No\n");
	
	return 0;
} 