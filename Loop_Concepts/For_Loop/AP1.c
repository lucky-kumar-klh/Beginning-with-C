#include<stdio.h>
int main() 
{
    // nth term of AP = a + (n-1)d
    // now using a = 100 , d = -3 we get,
    // AP nth = 100 + ((n-1)-3) = 103 - 3n. 
    int n;
    printf("enter n : ");
    scanf("%d", &n);
    for (int i = 100; i >= 0; i=i-3)
    {
        printf("%d\n", i);
    }
    
    return 0;
}