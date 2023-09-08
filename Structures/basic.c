// What are Sructures ?
// They are basically, User-Defined data types & having deifferent Attributes ( properties ) of the same object. 

#include <stdio.h>
#include <string.h>
int main(){
    struct pokemon  // User defined Attributes of object called Pokemon
    {
        float health;
        int power;
        int speed;
        char level[50];
    }Pikachu, Charizard; // Pikachu & Charizard are objects of class pokemon
    // How to declare pokemon ?
    //struct pokemon Pikachu;
    // Attributes of Pikachu
    Pikachu.health = 77.4;   // dot operator
    Pikachu.power;
    Pikachu.speed = 100;

    //struct pokemon Charizard;
    Charizard.health = 80.0;
    Charizard.power;
    Charizard.speed = 60;
    
    // How to Scan/Input values for any Attribute ?
    scanf("%d", &Pikachu.power);
    scanf("%d", &Charizard.speed);

    // how to print values of the Attributes ?
    printf("%d\n", Pikachu.power);
    printf("%d\n", Charizard.speed);

    // Character Attributes
    //Pikachu.level[14] = "Great Pokemon";  // It is an char Array
    strcpy(Pikachu.level,"Great Pokemon");
    printf("%s\n", Pikachu.level);  // ERROR

    return 0;
}