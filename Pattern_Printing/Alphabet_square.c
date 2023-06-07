#include <stdio.h>

int main() {

    int n;
    printf("Enter the number n : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        //int a = 1;  
        for (int j = 1; j <= n; j++) 
        {   
            //int d = a + 64;       // 'A' = (char)65   
            //char ch = (char)d;    // ASCII value to print alphabets from numbers.
            printf("%d ", j);
            //a++;
        }
        printf("\n");
    }
    

    return 0;
}