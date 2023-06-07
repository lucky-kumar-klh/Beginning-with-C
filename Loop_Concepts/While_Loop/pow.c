#include<stdio.h>
int main() {
    int a, b;
    printf("Enter the base number : ");
    scanf("%d", &a);
    printf("Enter the power number : ");
    scanf("%d", &b);

    int power = 1;
    for (int i = 1; i <= b; i++)
    {
        power = power * a ; // 1*2 then 2*2 then 4*2 and so on.....
    }
    
    printf("%d to the power %d is %d\n", a, b, power);
    return 0;
}