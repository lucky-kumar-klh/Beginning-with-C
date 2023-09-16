#include<stdio.h>
int main(){
    struct pokemon{     // For normal pokemons
        int speed;
        float health;
        char ability[50];
        int level;
    }charizard, pikachu, sqatle;

    struct legendary{   // For legendary pokemons
        pokemon;   // legendary pokemons have all features of normal pokemons also.
        char specialAbility[50];
        int stars;
    }giratina, dialga, palkia;
    
    // giving values to nested struct / klegendary pokemon

    

    return 0;
}