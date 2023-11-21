// What are Sructures ?
// They are basically, User-Defined data types & having deifferent Attributes ( properties ) of the same object. 
// Structure --> Collection of heterogenous data-type, used to store , when the data is having multiple parts.
#include <stdio.h>
#include <string.h>
int main(){
    struct pokemon  // User defined Attributes of class called Pokemon
    {
        float health;
        int power;
        int speed;
        char level[50];
    }Pikachu, Charizard; // Pikachu & Charizard are objects of class pokemon
    // How to declare objects of class "pokemon" ?
    // Struct pokemon Pikachu;
    struct pokemon squatel;
    // OR
    struct book 
    {
        int pages;
        char name[50];
        char author[50];
        float costPrize;
    }ikigai;      // # book_1, ikigai
    struct book richDadPoorDad;  // # book_2, richDadPoorDad
    
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