#include <stdio.h>
int main() 
{
    int age;
    printf("Enter your age : ");
    scanf("%d", &age);

    int marks;
    printf("Enter your marks : ");
    scanf("%d", &marks);

    switch (age)
    {
    case 3:
        printf("The age is 3\n");
        switch (marks)
        {
        case 10:
            printf("Your marks are 10\n");
            break;

        default :
            printf("Your marks are not great\n");
        } 
        break;
    case 5:
        printf("The age is 5\n");
        break;
    case 10:
        printf("The age is 10\n");
        break;
    default:
        printf("You all are in a right way\n");
    }
    return 0;
}