#include <stdio.h>
int main()
{
    float C, F, K;
    printf("Enter the Temperature in degree Celcius (C) : ");
    scanf("%f", &C);

    F = 9*C/5 + 32 ;
    printf("Temperature in Ferenhiet (F) is %0.2f\n", F);

    K = 273 + C ;
    printf("Temperature in Kelvin (K) is %0.2f\n", K);
    return 0;
}