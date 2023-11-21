
#include <stdio.h>
struct height{
    int feet;
    float inch;
} h1, h2;

int main(){
    float f1, f2;
    printf("Enter both h1 & h2 feet : ");
    scanf("%d %d", &h1.feet, &h2.feet);
    printf("Enter both h1 & h2 inches : ");
    scanf("%f %f", &h1.inch, &h2.inch);
    f1 = (2.54*h1.inch) + (30.48*h1.feet);
    f2 = (2.54*h2.inch) + (30.48*h2.feet);
    if ( f1 > f2 ) printf("heigth --> h1 > h2\n");
    else printf("heigth --> h2 > h1\n");
    printf("h1 --> %d feet, %.2f inches\n", h1.feet, h1.inch);
    printf("h2 --> %d feet, %.2f inches\n", h2.feet, h2.inch);
    return 0;
}