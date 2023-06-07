#include <stdio.h>

void myfunction(int count);

int main() {
    myfunction(10);
    return 0;
}

// Recursive function 
void myfunction(int count)
{
    if ( count == 0 ){
        return;
    }
    
    printf("Hello World !\n");
    myfunction(count-1);
}