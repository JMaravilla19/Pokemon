#include "Pokemon.h"
#include <iostream>

using namespace std;

//Default constructor
Pokemon :: Pokemon() {
	name = "Unknown";
	type = PokemonType::NORMAL;
	health = 50;
}

//Parameter constructor
Pokemon :: Pokemon(string p_name, PokemonType p_type, int p_health) {
	name = p_name;
	type = p_type;
	health = p_health;
}

//Deep copy constructor
Pokemon :: Pokemon(const Pokemon& other) {
	name = other.name;
	type = other.type;
	health = other.health;

	//cout << "A new Pokemon has been copied from " << other.name << endl;
}

void Pokemon :: attack() {
	//random message to check it works.
	cout << name << " Attacks with powerful move!" << endl;

}

//Destructor of the object
Pokemon :: ~Pokemon() {
	//Destructor logic if needed goes here.
}