#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    
    int nspace = n/2;
    int nstar = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= nspace; j++) // to print number of spaces in diamond.
        {
            printf("  ");
        }
        for (int k = 1; k <= nstar; k++)  // to print number of stars in diamond.
        {
            printf("* ");
        }
        if ( i < (n+1)/2 )
        {
            nspace--;
            nstar+=2;
        }
        else 
        {
            nspace++;
            nstar-=2;
        }
        
        printf("\n");    
    }
    
    return 0;
}