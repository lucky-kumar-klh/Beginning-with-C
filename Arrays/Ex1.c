#include <stdio.h>
int main () {
    int marks[10] ;
    int i;
    for ( i = 0; i <= 9; i++ )
    {
        printf("Enter Marks for Student %d : ", i+1);
        scanf("%d", &marks[i]);
        if ( marks[i] < 35 ) {
        printf("%d ", marks[i]);
    }
    }
    
    
    return 0;
}