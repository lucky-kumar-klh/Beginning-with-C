#include <stdio.h>
void myprice(float value); // This is Parameter inside (). 

int main() {
    float value = 100.00;  // This value will not change even 
                           // when we change value in the 
                           // function defination.
    printf("Hello World\n");
    printf("Value is %0.2f\n", value);// This value will not change even 
                                      // when we change value in the 
                                      // function defination.
    myprice(value); // This is an Argument inside ().
    return 0;
}

void myprice(float value) // This is also a Parameter inside ().
{
    value = value + (value * 0.18);  // This change in value
                                          // of function will not
                                          // affect in the calling 
                                          // function.
    printf("Total vlaue is %0.2f\n", value);
      // Here, 
}    