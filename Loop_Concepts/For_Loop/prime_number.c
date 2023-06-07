#include <stdio.h>
int main()
{
    int n;
    printf("Enter number n : ");
    scanf("%d", &n);
    
    int a = 1 ;
    for (int i = 2; i < n; i++)
    {
        if ( n % i == 0 )
        {
            a = 0 ; // yaha pe a ki value assume ki hai
                    // taki hum baad me iska referance le sake.
            break;
        }
        
    }
    if ( n == 1 )
    {
        printf("1 kuch bhi nhi hai bhai !\n");
    }
    else if ( n == 0 )
    {
        printf("0 ka sochna bhi mat vro !!!\n");
    }
    else if ( a == 0 )
    {
        printf("The number is Composite\n");
    }
    else 
    {
        printf("The number is Prime\n");
    }
    

    return 0;
}