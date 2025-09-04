#pragma once
#include "Grass.h"
#include "Player.h"
//class Player;

class Game {

	private:
		Grass forestGrass;

	public:
		Game();
		void gameLoop(Player& player);
};