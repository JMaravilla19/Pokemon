#pragma once
#include "Grass.h"

class WildEncounterManager {
public:
	WildEncounterManager();
	 Pokemon getRandomPokemonFromGrass(const Grass& grass);
};