#include <stdio.h>
void fun(int x[]){      // pass by reference values
    int temp = x[0];    // full array with it's address of array will be passed in this function.
    x[0] = x[1];        // So if changes are made here, they will appear in the output as well.
    x[1] = temp;
    return;
}
int main() {
    int array[2] = {2,9};
    printf("%d %d\n", array[0], array[1]);  // without swapping values.
    fun(array);
    printf("%d %d\n", array[0], array[1]);  // after swapping values.
    return 0;
}