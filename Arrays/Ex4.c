#include <stdio.h>
int main() {
    int array[7] = {1,2,3,4,5,6,7};
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < 7; i=i+2){   // even indices
        sum1 = sum1 + array[i];
    }
    for (int i = 1; i < 7; i=i+2){   // odd indices
        sum2 = sum2 + array[i];
    }
    int diff = sum1 - sum2;
    printf("%d\n", diff);
    return 0;
}