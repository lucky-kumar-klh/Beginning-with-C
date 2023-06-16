#include <stdio.h>
void palindrome(int arr []){
    int a;
    for (int i=0, j=4; i<j; i++,j--){
        if( arr[i]==arr[j] ) a = 1;
        else {
            a = 0;
            break;
        }
    }
    if ( a==1 ) printf("Palindrome.");
    else if ( a==0 ) printf("Not a Palindrome.");
    
    return;
}
int main() {
    int arr[5] = {1,2,5,3,1};
    palindrome(arr);
    return 0;
}