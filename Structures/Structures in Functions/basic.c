#include <stdio.h>
#include <stdlib.h>
struct rational{
    int dm;
    int nm;
} r1, r2;
// to access any attribute of a class using pointers use "->" instead of "."
void accept (struct rational* r){
    scanf("%d %d", &r->nm, &r->dm);
}
void print (struct rational* r){
    printf("%d/%d\n", r->nm, r->dm);
}
void sum ( struct rational* r ){
    printf("\nSum = %d", r->nm + r->dm);
}
void difference ( struct rational* r ){
    printf("\nDifference = %d", abs(r->nm - r->dm));
}
void product ( struct rational* r ){
    printf("\nProduct = %d", r->nm * r->dm);
}
int main(){
    printf("Enter Nm & Dm for r1 : ");
    // accept ( r1 ); // pass by value
    accept ( &r1 ); // pass by reference
    printf("ENter Nm & Dm for r2 : ");
    accept ( &r2 );
    printf("-----------------------------------------\nRational r1 : ");
    print ( &r1 );
    printf("\nRational r2 : ");
    print ( &r2 );
    sum ( &r1 );
    sum ( &r2 );
    product ( &r1 );
    product ( &r2 );
    difference ( &r1 );
    difference ( &r2 );
    return 0;
}