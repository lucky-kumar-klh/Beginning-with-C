#include<stdio.h>
int main() {

    int a,b;
    printf("Enter value of a : ");
    scanf("%d", &a);
    printf("Enter value of b : ");
    scanf("%d", &b);
    if ( a >= b ) {
     printf("yes\n");
    }

else {
    printf("no, please check again\n");
}
    return 0;
}