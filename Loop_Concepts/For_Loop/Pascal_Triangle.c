// #include <stdio.h>
// int main(){
//     int n;
//     printf("Enter value of n : ");
//     scanf("%d", &n);
//     for (int i = 0; i < n; i++)
//     {
//         // for spaces
//         for (int k = 1; k < n-i; k++)
//         {
//             printf("  ");
//         }
//         // for numbers
//         int num = 1;
//         for (int j = 0; j <= i+1; j++)
//         {
//             printf(" %2d ", num);
//             num = num * (i-j)/(j+1);   // nC(r+1) = nCr * (n-r)/(r+1) 
//         }
//         printf("\n");
//     }
//     printf("100011");
//     return 0;
// }

// GFG SOLUTION

#include <stdio.h> 
void printPascal(int n) 
{ 
    for (int line = 1; line <= n; line++) { 
        for (int space = 1; space <= n - line; space++) 
            printf("  "); 
        // used to represent C(line, i) 
        int coef = 1; 
        for (int i = 1; i <= line; i++) { 
            // The first value in a line 
            // is always 1 
            printf("%4d", coef); 
            coef = coef * (line - i) / i; 
        } 
        printf("\n"); 
    } 
} 
  
// Driver code 
int main() 
{ 
    int n = 5; 
    printPascal(n); 
    return 0; 
}