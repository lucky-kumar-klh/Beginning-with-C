#include <stdio.h>

void Hello(); // function declaration or prototype 

void goodbye(); // It is a function prototype simply waste of time. 

int main() 
{
    Hello();   // function call
    goodbye();

    return 0;
}

void Hello()          // function defination
{
    printf("Hello\n"); 
}

void goodbye()
{
    printf("good bye\n");
}