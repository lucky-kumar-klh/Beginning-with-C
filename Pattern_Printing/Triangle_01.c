#include <stdio.h>
int main() {
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    
    int a ;
    for (int i = 1; i <= n; i++)
    {
        if ( i%2 == 0 ) a = 0;        // for even lines, start with 0.
        else a = 1;                   // for odd lines, start with 1.
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", a);         // After printing with 0, since a==0, now value
                                      // of becomes 1 , then since a==1, using else condition
                                      // now value of a becomes 0.......this continues
                                      // to print 0 and 1 series.  
            if( a == 0 ) a = 1;
            else a = 0;
        }
        printf("\n");
    }
    
    return 0;
}