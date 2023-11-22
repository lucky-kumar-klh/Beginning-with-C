#include <stdio.h>
int const (i*i) = -1;
struct complex{
    int real;
    int img;
} c1, c2;
void sum ( struct complex* c1, struct complex* c2 ){
    printf("Sum of real values = %d\n", c1->real + c2->real);
    printf("Sum of complex values = %d\n", c1->img + c2->img);
}
void product ( struct complex* c1, struct complex* c2 ){
    // c1(real + i(img)) * c2(real + i(img))
    int prod = c1->img * c2->img;
    if ( prod > 0 ) prod = -prod;
    else 
    printf("Product of real values = %d\n", c1->real*c2->real);
    printf("Product of real values = %d\n", );
}
int main(){
    printf("Enter real & complex numbers for 1st Complex: ");
    scanf("%d %d", &c1.real, &c2.img);
    printf("Enter real & complex numbers for 2nd Complex : ");
    scanf("%d %d", &c2.real, &c2.img);
    sum ( &c1, &c2 ); 
    return 0;
}