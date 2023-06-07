#include <stdio.h>
int factorial(int a){
    int fact = 1;
    for (int i = 1; i <= a; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int combination(int n, int r){
    int nCr = factorial(n)/(factorial(r)*factorial(n-r));
    return nCr;
}
// 1             In nCr, n --> i and r --> j   
// 1 1           therfore, nCr --> iCj
// 1 2 1
// 1 3 3 1
// 1 4 6 4 1

int main() {
    int n;
    printf("Enter n : ");
    scanf("%d", &n);       // by just entering value of n I'll get diff values/combinations of i & j.

    for (int i = 0; i <= n; i++)
    {
        for (int k = 0; k <= n-i; k++)  // this loop is to create blank spaces.
        {
            printf(" ");
        }

        for (int j = 0; j <= i; j++)
        {
            //printf("%d ", factorial(i)/(factorial(j)*factorial(i-j)));
            // or
            printf("%d ", combination(i,j));
        }
        printf("\n");
    }
    return 0;
}