#include "Game.h"
#include "Player.h"
#include "Professor.h"
#include "Grass.h"


#include <iostream>
#include <limits> // Include this header to use std::numeric_limits
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

	
	// Create the professor and Main Player Objects
	ProfessorOak professor = ProfessorOak("Professor Oak");
	Player player;

	//Greet the player and offer choices:
	professor.greetPlayer(player);
	professor.offerPokemonChoices(player);

	//Explain main quest
	professor.explainMainQuest(player);

	//Start main loop game
	Game game;
	game.gameLoop(player);

	return 0;
}