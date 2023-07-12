#include <stdio.h>
#include <stdbool.h>
int main() {
    int a, i;
    bool flag = false;
    int arr[7] = { 1,2,3,4,5,6,7 };
    printf("Enter the element you wish to find :");
    scanf("%d", &a);
    for ( i = 0; i < 7; i++ ){
        if ( arr[i] == a ){
            flag = true;
            break;
        }
    }
    if ( flag == true ){
        printf("%d is present in this array\n", a);
        printf("It's index is %d\n", i);
    }
    else printf("%d is not present\n", a);
    return 0;
}