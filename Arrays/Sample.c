#include <stdio.h>
int main() {

    // int arr[5];  // 5 dabbe ban agye & array only declare huya hai.
    int arr[5] = { 2,4,7,1,9 }; // Declaration & initialisation both.
    arr[3] = 100;  // index 3 ka element 1 se ab 100 ban gya.
    float b [3] = {1.4, 8.25, 10.7};
    char ch [4] = {'A','c','@','%'};
    printf("%d\n", arr[2]);
    printf("%d\n", arr[3]); // it will not print 1 but 100
    printf("%0.2f\n", b[1]);
    printf("%c\n", ch[3]);
    
    return 0;
}