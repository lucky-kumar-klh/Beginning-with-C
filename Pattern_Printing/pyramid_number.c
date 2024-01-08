// #include <stdio.h>
// int main(){
//     int n;
//     printf("Enter the number : ");
//     scanf("%d", &n);

//     for (int i = 1; i <= n; i++)
//     {
//         for (int k = 1; k <= n-i; k++)
//         {
//             printf("  ");
//         }
//         int a = 1;
//         for (int j = 1; j <= 2*i-1; j++)
//         {
//             int d = a + 64;    // to print alphabet pyramid.
//             printf("%c ", d);
//             a++;
//         }
//         printf("\n");
//     }
//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     char c = 'a';
//     for(int i=0;i<n;i++) {
//         for(int j=0;j<n-i;j++) {
//             printf(" ");
//         }
//         for(int k=0;k<=i;k++) {
//             printf("%2c",c);
//             c++;
//         }
//         printf("\n");
//     }
//     return 0;
// }
#include <stdio.h>
int main(){
    int n, z = 65;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){
        // Print Spaces
        for (int j = 1; j <= n-i; j++){
            printf(" ");
        }
        // Print Alphabets
        for (int k = 1; k <= i; k++){
            printf("%c ", z++);
        }
        printf("\n");
    }
}
