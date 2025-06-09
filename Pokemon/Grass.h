
// ########### KEY DIFFERENCE BETWEEN STRUCT AND CLASS #################
/*
They’re typically used for simple data grouping without behavior (methods).
In our case, the grass just holds data about the environment and Pokémon—it doesn’t need methods to perform actions.
Though structs can have methods, they're meant to be lightweight(small amount of data) containers.

On the other hand, classes are more powerful:
They usually represent entities that not only store data but also have behaviors (methods) attached to them.
Like our Pokemon class that has methods for attacking.
In structs, the default access level is public, while in classes, it is private.
*/

#pragma once
#include <string>
#include <vector>
#include "Pokemon.h"

struct Grass {

	//Environment like "cave", "Forest", "River"
	std::string environmentType;

	//List of Wild Pokemon that live in the GRASS.	
	std::vector<Pokemon> wildPokemonList;
	
	//Probability of encountering a wild pokemon (out of 100)
	int encounterRate;

};