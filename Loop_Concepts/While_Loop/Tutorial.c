#include <stdio.h>
int main() {
    int x=4, y=0, z;
    while ( x>=0 )
    {
        if (x == y)
        {
            break;  // when x==y, this break statment will make the
                    // program out of the if else condition and 
                    // hence, while will also terminate.
        }
        else printf("\n%d %d", x, y);
        x--;
        y++;   
    }
    
    return 0;
}