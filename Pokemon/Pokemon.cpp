#include "Pokemon.h"
#include "PokemonType.h"
#include <iostream>


using namespace std;


//Default constructor
Pokemon :: Pokemon() {
	name = "Unknown";
	type = PokemonType::NORMAL;
	health = 50;
	maxHealth = 100;
}

//Parameter constructor
Pokemon :: Pokemon(string p_name, PokemonType p_type, int p_health, int p_maxHealth) {
	name = p_name;
	type = p_type;
	health = p_health;
	maxHealth = p_maxHealth;
}

//Deep copy constructor
Pokemon :: Pokemon(const Pokemon& other) {
	name = other.name;
	type = other.type;
	health = other.health;
	maxHealth = other.maxHealth;

	//cout << "A new Pokemon has been copied from " << other.name << endl;
}

void Pokemon :: attack(Pokemon &target) {
	int damage{ 10 };

	cout << name << " attacks " << target.name << " for " << damage << " damage." << endl;

}

//Destructor of the object
Pokemon :: ~Pokemon() {
	//Destructor logic if needed goes here.
}

void Pokemon::takeDamage(int damage) {
	health -= damage;

	if (health < 0) {
		health = 0; //Ensure HP doesn't go below 0
	}
}

bool Pokemon::isFainted() const {
	// return TRUE if health is less or equal to zero.
	// returr FALSE if health is more than zero.
	return health <= 0;
}

		