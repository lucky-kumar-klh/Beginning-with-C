#include <stdio.h> 
#include <math.h> // to use pow(n,m) function in math,
                  // therefore <math.h> pre processor
                  // or the header file is included.

float areaofsquare(float a); // parameter
float areaofcircle(float b); // parameter
float areaofrectangle(float c, float d); // parameter

int main() {

    float a, b, c, d;
    printf("Enter the side of Square : ");
    scanf("%f", &a);
    printf("Area of Square is %0.2f\n\n", areaofsquare(a)); 
         // a is argument.
         // printf me function ko call kiya hai.
   
    printf("Enter the radius of Circle : ");
    scanf("%f", &b);
    printf("Area of Circle is %0.2f\n\n", areaofcircle(b));
         // b is argument.

    printf("Enter the length of Rectangle : ");
    scanf("%f", &c);
    printf("Enter the breadth of Rectangle : ");
    scanf("%f", &d);
    printf("Area of Rectangle is %0.2f\n\n", areaofrectangle(b,d));
         // c & d are arguments.

    return 0;
}

float areaofsquare(float a){  // float a is parameter.
    return a * a ;
}

float areaofcircle(float b){  // float b is parameter.
    return 3.14 * b * b ;
}

float areaofrectangle(float c, float d){ // float c,d are parameters.
    return c * d ;
}