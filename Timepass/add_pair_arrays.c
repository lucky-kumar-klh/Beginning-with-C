#include <stdio.h>
int main() {
    int n;
    int arr[5] = {2,3,4,8,1};
    printf("Target Sum : ");
    scanf("%d", &n);
    for (int i = 0; i < 5; i++){
        for (int j = i; j < 5; j++){
            if ( arr[i]+arr[j] == n ){
                printf("(%d %d)\n", i, j);
            }
        }
    }
    return 0;
}