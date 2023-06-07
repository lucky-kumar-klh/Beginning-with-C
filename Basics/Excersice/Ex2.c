#include <stdio.h>
int main() {
    int subject;

    printf("In which subjetcs you've passed in ?\n\n"
    "1. Maths & Science both\n\n"
    "2. Maths only\n\n" 
    "3. Science only\n\n");
    
    printf ("Please select the number from above given options : ");
    scanf("%d", &subject);

    if ( subject == 1 ) {
        printf("Congrtas ! You've won a gift for ruppes 45.\n");
    }
    else if ( subject == 2 ) {
        printf("Congrtas ! You've won a gift for ruppes 15\n");
    }
    else if ( subject == 3 ) {
        printf("Congrtas ! You've won a gift for ruppes 15\n");
    }

    return 0;
}