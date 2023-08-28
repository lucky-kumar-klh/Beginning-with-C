// #include <stdio.h>
//  int main(){	
// 	int n, i, j;
//     printf("Enter any number : ");
// 	scanf("%d", &n);
// 	int min = 0, a, b;
//     for (int i = 1; i <= 2*n-1; i++){
// 		for (int j = 1; j <= 2*n-1; j++){
//             a = i;
//             if ( i > n ) a = 2*n-i;
//             b = j;
// 			if (b > n) j = 2*n-j;

//             if (a<b) min = a;
//             else min = b;
// 			printf("%d ", n + 1 - min);
// 		}
// 		printf("\n");
// 	}
// 	return 0;
// }

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char ch[60];
    //ch = malloc(1024 * sizeof(char));
    scanf("%s", ch);
    //ch = realloc(ch, strlen(ch) + 1);
    int i = 0;
    while ( ch[i] != '\0' ) {
        printf("%c",ch[i]);
        if ( ch[i] == ' ' ) {
            printf("\n");  
        }
        i++;
    }
    return 0;
}