#pragma once
#include <string>
#include "PokemonType.h"

using namespace std;


class Pokemon {
public:
	string name;
	PokemonType type;
	int health;
	int maxHealth;

	Pokemon();
	Pokemon(string p_name, PokemonType p_type, int p_health, int p_maxHealth);
	Pokemon(const Pokemon& other);
	void attack(Pokemon& target);
	~Pokemon();
	void takeDamage(int damage); //method to reduce HP
	bool isFainted() const; //Method to check if pokemon has fainted.

};