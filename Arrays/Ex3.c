#include <stdio.h>
int main() {
    int array[7] = {1,2,3,4,5,6,7};
    int x, a = 0;
    printf("Enter a number : ");
    scanf("%d", &x);
    for (int i = 0; i < 7; i++){

        if ( x < array[i] ){
            a = a + 1;
        }
    }
    printf("%d\n", a);
    return 0;
}