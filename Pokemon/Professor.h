#pragma once
#include <string>
#include "Player.h"
//#include "Pokemon.h"

class ProfessorOak {
public:
	string name;

	//constructor
	ProfessorOak(string p_name);

	//Methods
	void greetPlayer(Player& player);
	void offerPokemonChoices(Player& player);
	void explainMainQuest(Player& player);

};