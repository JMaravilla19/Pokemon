#include "BattleManager.h"
#include "Pokemon.h"
#include <iostream>

using namespace std;

void BattleManager::battle(Pokemon& playerPokemon, Pokemon& wildPokemon) {
	cout << "A wild " << wildPokemon.name << " appeared!" << endl;

	while (!playerPokemon.isFainted() && !wildPokemon.isFainted()) {
		
		playerPokemon.attack(wildPokemon); //player attacks first

		if (!wildPokemon.isFainted()) {
			wildPokemon.attack(playerPokemon); //Wild pokemon attacks back!
		}
	}

	if (playerPokemon.isFainted()) {
		cout << "Your " << playerPokemon.name << " has fainted! You lose the battle." << endl;
	}
	else {
		cout << "You defeated the " << wildPokemon.name << "! You won!" << endl;
	}

}