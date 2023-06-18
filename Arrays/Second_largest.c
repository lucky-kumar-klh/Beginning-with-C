// #include <stdio.h>
// #include <limits.h>
// int main() 
// {
//     int array[8] = {1,2,3,4,5,6,7,8};
//     int max2, max1 = array[0];
//     for (int i = 0; i < 8; i++)
//     {
//         if ( max1 < array[i] ){
//             max1 = array[i];
//         }
//     }
//     for (int i = 0; i < 8; i++)
//     {
//         if ( array[i] != max1 && max2 < array[i] ){    // max1 != 8 && max2 == 8
//             max2 = array[i];
//         } 
//     }
//     printf("%d\n", max2);
//     return 0;
// }
//---------------------------------------------------------------------------------------------------------//

#include <stdio.h>
#include <limits.h>
int main() {
    int array[7] = {12,6,8,44,37,23,11};
    int max2, max1 = INT_MIN;
    for (int i = 0; i < 7; i++)
    {
        if ( max1 < array[i] ){
            max2 = max1;        // max 2 is previous max 1.
            max1 = array[i];   // max 1 is new max 1.
        }
        else if ( max2 < array[i] && max1 != array[i] ){   // This condition will only run when above if condition will not work.
            max2 = array[i];            
        }
    }
    printf("Second largest element is %d\n", max2);
    return 0;
}