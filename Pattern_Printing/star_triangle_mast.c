#include <stdio.h>
int main() {
    int n;
    printf("Enter any number n : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
/* LOOP 1 */  for (int j = 1; j <= n-i; j++)  // LOOP 1 is to print spaces.
        {                                     // these 2 loops are running simultaniously.
            printf("  ");                     // when LOOP 1 finishes, LOOP 2 runs, then 
        }                                     // \n for next line runs.
        int a = 1;
/* LOOP 2 */  for (int k = 1; k <= i; k++)
        {
            //int d = 64 + a;                  // LOOP 2 is to print *.
            //printf("%c ", d);                
           // a++;

            printf("%d ", k);                              
        }                                     
        
        printf("\n");
    }
    
    return 0;
}