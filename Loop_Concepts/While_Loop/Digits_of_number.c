#include <stdio.h>
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);

    int count = 0;

    while ( n != 0 )
    {
        n = n/10;
        count++;
    }
    printf("There are %d digits in the given number.\n", count);
    
    return 0;
}