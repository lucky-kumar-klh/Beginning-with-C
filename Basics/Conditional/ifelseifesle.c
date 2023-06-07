#include <stdio.h>
int main() {

    int age;
    printf("Enter your age ra : ");
    scanf("%d", &age);
    printf("Your age is %d\n", age);

    if ( age >= 45 ) {

        printf("You are a Senior Citizen and Please care of your Health\n");

    }

    else if ( age >= 20 ) {

        printf("You are an Adult bieng and you have lot of Potential in you !\n");

    }

    else if ( age >= 13 ) {

        printf("Congratulations !! You are a teenager now \n You need put in a lot of hardwork in your age\n");

    }

    else {

        printf("Study hard ra\n");

    }

    return 0;
}