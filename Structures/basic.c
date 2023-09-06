// What are Sructures ?
// They are basically, User-Defined data types & having deifferent Attributes ( properties ) of the same object. 

#include <stdio.h>
int main(){
    struct pokemon  // User defined Attributes of object called Pokemon
    {
        float health;
        int power;
        int speed;
    };
    // How to declare pokemon ?
    struct pokemon Pikachu;
    // Attributes of Pikachu
    Pikachu.health = 77.4;   // dot operator
    Pikachu.power = 67;
    Pikachu.speed = 100;

    return 0;
}