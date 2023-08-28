#include <stdio.h>
// int min(int i, int j){
// 	if ( i > j ){
// 		return j;
// 	}
// 	else return i;
//}
 int main(){	
	int n, i, j;
	scanf("%d", &n);
	printf("Enter any number : ");
	int min = 0;
    for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			if ( i<j ) min = i;
			else min = j;
			printf("%d ", min);
		}
		printf("\n");
	}
	
	return 0;
}