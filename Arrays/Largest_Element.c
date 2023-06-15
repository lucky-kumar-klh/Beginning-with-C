#include <stdio.h>
#include <limits.h>
int main() {

    int array[5] = {3,-4,9,4,5};
    int max = array[0];
    //int max = INT_MIN;    // detects minimum number in array.
    for (int i = 0; i < 5; i++)
    {
      /*  if ( max > array[i] ){     // for maximum element
            max = array[i];
        }                    */
        if ( max < array[i] ){       // for minimum element
            max = array[i];
        }
    }
    printf("%d\n", max);
    return 0;
}