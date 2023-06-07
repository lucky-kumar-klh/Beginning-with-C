#include <stdio.h>

void function_name(){

    printf("I created my Fisrt Function !\n");
    // This new defined function is saved for later use.
    /* This function will be only when it's called in the 
       int main(){ } function.*/
}

int main() {

    printf("Hello World\n");
    function_name();

    return 0;
}