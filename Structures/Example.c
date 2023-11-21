#include <stdio.h>
struct student{
        long long int id;
        char name[50];
        float cgpa;
        float fees;
    }s1, s2;

int main(){
    float discount;
    printf("Enter your ID : ");
    scanf("%lld", &s1.id);
    printf("Enter your Name : ");
    scanf(" %[^\n]s", s1.name);
    printf("Enter your CGPA : ");
    scanf("%f", &s1.cgpa);
    printf("Enter you fees : ");
    scanf("%f", &s1.fees);
    printf("----------------------------------\n");
    if ( s1.cgpa >= 9 ){
        discount = s1.fees - (0.3*s1.fees);
        printf("You've got 30%% discount on your fees\n");
    }
    else if ( s1.cgpa < 9 && s1.cgpa >= 8 ){
        discount = s1.fees - (0.15*s1.fees);
        printf("You've got 15%% discount on your fees\n");
    }
    else if ( s1.cgpa < 8 && s1.cgpa >= 7 ){
        discount = s1.fees - (0.05*s1.fees);
        printf("You've got 5%% discount on your fees\n");
    }
    else {
        discount = s1.fees;
        printf("Sorry! You didn't got any discount on your fees\n");
    }

    printf("ID = %lld\n", s1.id);
    printf("Name = %s\n", s1.name);
    printf("CGPA = %.2f\n", s1.cgpa);
    printf("Fees = %.2f\n", discount);
    printf("--------------------------------\n");


    return 0;
}