#include <stdio.h>

void namaste();
void bonjour();

int person;
int main() {
    
    printf("Which type of person you are ?\n"
    "1. Indian\n"
    "2. French\n"
    "Type here : ");
    scanf("%d", &person);
   
    if ( person == 1 )
    {
        namaste();
    }
    else if ( person == 2 )
    {
        bonjour();
    }
    else { 
        printf("You can only type 1 or 2 \n");
    }
    

    return 0;
}

void namaste()
{
    printf("Namaste !\n");
    bonjour();               // function ke andar we are calling other function.
}

void bonjour()
{
    printf("Bonjour !\n");
}