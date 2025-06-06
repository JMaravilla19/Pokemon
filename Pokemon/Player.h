#pragma once 
#include <string>
#include "Pokemon.h"

using namespace std;

//class Pokemon;

class Player {
public:
	//atributes
	string name;
	Pokemon chosenPokemon;

	//methods:
	Player();
	Player(string p_name, Pokemon p_chosenPokemon);
	Player(const Player& other);
	void choosePokemon(int choice);

};