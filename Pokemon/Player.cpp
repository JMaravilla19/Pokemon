#include "Player.h"
#include "PokemonChoice.h"
#include "PokemonType.h"
#include "Utility.h"
#include <iostream>



using namespace std;

	//Default constructor
Player ::	Player() {
		name = "Trainer";
		chosenPokemon = Pokemon();

		//cout << "A new player named '" << name << "' has been created." << endl;
	}

	//Parametized constructor
Player ::	Player(string p_name, Pokemon p_chosenPokemon ) {
		name = p_name;
		chosenPokemon = p_chosenPokemon;	
	}

Player ::	Player(const Player& other) {
		name = other.name;
		chosenPokemon = other.chosenPokemon;
	}

	//Method to choose pokemon
void Player :: choosePokemon(int choice) {
		switch (static_cast<PokemonChoice>(choice)) {
		case PokemonChoice::CHARMANDER:
			chosenPokemon = Pokemon("Charmander", PokemonType::FIRE, 100);
			break;
		case PokemonChoice::BULBASAUR:
			chosenPokemon = Pokemon("Bulbasaur", PokemonType::GRASS, 100);
			break;

		case PokemonChoice::SQUIRTLE:
			chosenPokemon = Pokemon("Squirtle", PokemonType::WATER, 100);
			break;

		default:
			chosenPokemon = Pokemon("Pikachu", PokemonType::ELECTRIC, 100);
			break;
		}

		Utility::waitForEnter();
		cout << "========================================" << endl;
		cout << name << " chose " << chosenPokemon.name << endl;
		cout << chosenPokemon.name << " is now yours!" << endl;
		cout << "========================================" << endl;
		Utility::waitForEnter();
	}