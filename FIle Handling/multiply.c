#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    // Check if the user provided two numbers as command line arguments
    // if (argc != 3) {
    //     printf("Please provide two numbers as command line arguments.\n");
    //     return 1;
    // }

    // Convert the command line arguments to integers
    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);

    // Multiply the two numbers
    int result = num1 * num2;

    // Print the result
    printf("The product of %d and %d is %d.\n", num1, num2, result);

    return 0;
}